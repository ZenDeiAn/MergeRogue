using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using RaindowStudio.Utility;
using RaindowStudio.DesignPattern;
using UnityEngine;
using Random = UnityEngine.Random;

public class BattleLogicLibrary : Singleton<BattleLogicLibrary>
{
    private static readonly int Moving = Animator.StringToHash("Moving");
    private static readonly int Attack = Animator.StringToHash("Attack");
    private static readonly int Die = Animator.StringToHash("Die");
    private static readonly int Hurt = Animator.StringToHash("Hurt");
    private static readonly int Idle = Animator.StringToHash("Idle");

    public Dictionary<string, Action<Actor, List<Actor>>> ActorAttackLibrary { get; private set; }
    public Dictionary<string, Action<Actor, List<Actor>>> ActorSkillLibrary { get; private set; }
    
    private float GetModelForwardLength(SkinnedMeshRenderer skinnedMeshRenderer)
    {
        if (skinnedMeshRenderer == null) return 0f;

        Bounds bounds = skinnedMeshRenderer.bounds;
        Transform meshTransform = skinnedMeshRenderer.transform;

        Vector3 worldSize = Vector3.Scale(bounds.size, meshTransform.lossyScale);

        float forwardLength = Mathf.Abs(Vector3.Dot(worldSize, meshTransform.forward.normalized));

        return forwardLength;
    }

    private Vector3 GetCenterPosition(List<Actor> actors)
    {
        Vector3 center = Vector3.zero;
        foreach (var actor in actors)
        {
            center += actor.transform.position;
        }
        return center / actors.Count;
    }

    private void MeleeActionLogic(Actor actor, List<Actor> targets, Action meleeAction)
    {
        // Save start position
        Vector3 startPosition = actor.transform.position;
        
        // Calculate front of targets
        Vector3 center = GetCenterPosition(targets);
        Vector3 targetPosition = Vector3.zero;
        foreach (Actor target in targets)
        {
            targetPosition.z = Mathf.Max(GetModelForwardLength(target.meshRenderer) / 2, targetPosition.z);
        }
        targetPosition.z += GetModelForwardLength(actor.meshRenderer) / 2;
        targetPosition = center + targets[0].transform.forward * targetPosition.z;

        // Start approach logic.
        // Animation
        float moving = 0;
        actor.animator.SetFloat(Moving, moving);
        Coroutine moveCoroutine = actor.LoopUntil(() => moving >= 1, () =>
            actor.animator.SetFloat(Moving, moving = Mathf.Min(moving + Time.deltaTime * 5, 1)));

        // Transform move
        actor.transform.DOMove(targetPosition, 0.5f).SetEase(Ease.Linear).SetRelative(false).OnComplete(() =>
        {
            meleeAction?.Invoke();
            actor.DelayToDo(Time.deltaTime, () =>
            {
                string actionClipName = actor.animator.GetCurrentAnimatorClipInfo(0)[0].clip.name;
                // Wait Until SetTrigger cause animation clip change to action clip not walking.
                actor.WaitUntilToDo(
                    () => actor.animator.GetCurrentAnimatorClipInfo(0)[0].clip.name != actionClipName,
                    () =>
                    {
                        // Wait for action clip end.
                        actionClipName = actor.animator.GetCurrentAnimatorClipInfo(0)[0].clip.name;
                        actor.WaitUntilToDo(
                            () => actor.animator.GetCurrentAnimatorClipInfo(0)[0].clip.name != actionClipName,
                            () =>
                            {
                                actor.StopCoroutine(moveCoroutine); 
                                moveCoroutine = actor.LoopUntil(() => moving <= -1, () =>
                                    actor.animator.SetFloat(Moving,
                                        moving = Mathf.Max(moving - Time.deltaTime * 5, -1)));

                                actor.transform.DOMove(startPosition, 1f).SetEase(Ease.Linear).SetRelative(false)
                                    .OnComplete(() =>
                                    {
                                        actor.ActingType = ActType.Idle;
                                        actor.StopCoroutine(moveCoroutine); 
                                        actor.LoopUntil(() => moving >= 0, () =>
                                            actor.animator.SetFloat(Moving,
                                                moving = Mathf.Clamp(moving + Time.deltaTime * 10, -1, 0)));
                                    });
                            });
                    });
            });
        });
    }

    public List<Actor> GetTargets(List<Actor> targets, SelectTargetsType type)
    {
        List<Actor> targetList;
        switch (type)
        {
            case SelectTargetsType.LowestHealthSingleEnemy:
                targetList = new List<Actor>()
                {
                    targets.Where(a => a.ActorType == ActorType.Enemy).Aggregate((minActor, nextActor) =>
                        nextActor.Status.Health < minActor.Status.Health ? nextActor : minActor)
                };
                break;
            
            case SelectTargetsType.HighestHealthSingleEnemy:
                targetList = new List<Actor>()
                {
                    targets.Where(a => a.ActorType == ActorType.Enemy).Aggregate((minActor, nextActor) =>
                        nextActor.Status.Health > minActor.Status.Health ? nextActor : minActor)
                };
                break;
            
            case SelectTargetsType.AllEnemies:
                targetList = targets.Where(a => a.ActorType == ActorType.Enemy).ToList();
                break;
            
            case SelectTargetsType.DeadEnemy:
                targetList = new List<Actor>()
                {
                    targets.Where(a => a.ActorType == ActorType.Enemy).FirstOrDefault(a => a.Status.Health == 0)
                };
                break;
            
            case SelectTargetsType.AllDeadEnemies:
                targetList = targets.Where(a => a.Status.Health == 0).ToList();
                break;
            
            case SelectTargetsType.LowestHealthSingleAlly:
                targetList = new List<Actor>()
                {
                    targets.Where(a => a.ActorType == ActorType.Ally).Aggregate((minActor, nextActor) =>
                        nextActor.Status.Health < minActor.Status.Health ? nextActor : minActor)
                };
                break;
            
            case SelectTargetsType.HighestHealthSingleAlly:
                targetList = new List<Actor>()
                {
                    targets.Where(a => a.ActorType == ActorType.Ally).Aggregate((minActor, nextActor) =>
                        nextActor.Status.Health > minActor.Status.Health ? nextActor : minActor)
                };
                break;
            
            case SelectTargetsType.AllAllies:
                targetList = targets.Where(a => a.ActorType == ActorType.Ally).ToList();
                break;
            
            case SelectTargetsType.DeadAlly:
                targetList = new List<Actor>()
                {
                    targets.Where(a => a.ActorType == ActorType.Ally).FirstOrDefault(a => a.Status.Health == 0)
                };
                break;
            
            case SelectTargetsType.AllDeadAllies:
                targetList = targets.Where(a => a.Status.Health == 0).ToList();
                break;
            
            default:
                targetList = new List<Actor>();
                break;
        }

        return targetList;
    }
    
    public void ActorDamageToTargets(Actor source, List<Actor> targets, bool trueDamage = false, BuffType buffType = BuffType.None)
    {
        foreach (var target in targets)
        {
            Debug.Log($"{source.ActorData.ID}({source.Status.Health}) -> {target.ActorData.ID}({target.Status.Health})");
            bool critical = Random.Range(0.0f, 1.0f) <= Mathf.Clamp(source.Status.CriticalChanceCalculated, 0, 1);
        
            int damage = source.Status.AttackCalculated;
            damage = critical ? (int)(damage * source.Status.CriticalDamageCalculated) : damage;
        
            if (!trueDamage)
            {
                int damageTemp = Mathf.Max(damage - target.Status.armedShield, 0);
                target.Status.armedShield = Mathf.Max(target.Status.armedShield - damage, 0);
                damage = damageTemp;
            }
        
            target.Status.health = Mathf.Max(target.Status.Health - damage, 0);
            
            // Animation
            if (buffType == BuffType.None)
            {
                target.animator.SetTrigger(target.Status.health == 0 ? Die : Hurt);
            }
            else
            {
                target.animator.SetFloat(Idle, (int)buffType);
            }
            
            Debug.Log($"{source.ActorData.ID}({source.Status.Health}) => {target.ActorData.ID}({target.Status.Health}) : {damage}");
        }
    }

    public void Initialize()
    {
        ActorAttackLibrary = new Dictionary<string, Action<Actor, List<Actor>>>
        {
            { "Warrior", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.HighestHealthSingleEnemy);
                    source.AnimationTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    MeleeActionLogic(source, targetList,
                        () => {
                            source.animator.SetTrigger(Attack);
                        });
                }
            },
            { "Warhammer", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.LowestHealthSingleEnemy);
                    source.AnimationTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    MeleeActionLogic(source, targetList,
                        () => {
                            source.animator.SetTrigger(Attack);
                        });
                }
            },
            { "Slime", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.HighestHealthSingleAlly);
                    source.AnimationTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    MeleeActionLogic(source, targetList,
                        () => {
                            source.animator.SetTrigger(Attack);
                        });
                }
            },
            { "NagaWizard", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.LowestHealthSingleAlly);
                    source.AnimationTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    MeleeActionLogic(source, targetList,
                        () => {
                            source.animator.SetTrigger(Attack);
                        });
                }
            },
            { "FlyingDemon", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.LowestHealthSingleAlly);
                    source.AnimationTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    MeleeActionLogic(source, targetList,
                        () => {
                            source.animator.SetTrigger(Attack);
                        });
                }
            },
        };
        
        ActorSkillLibrary = new Dictionary<string, Action<Actor, List<Actor>>>
        {
            { "Warrior", (source, targets) => {
                
            }},
            { "Warhammer", (source, targets) => {
                
            }},
            { "Slime", (source, targets) => {
                
            }},
            { "NagaWizard", (source, targets) => {
                
            }},
            { "FlyingDemon", (source, targets) => {
                
            }},
        };
    }
}

public enum SelectTargetsType
{
    LowestHealthSingleEnemy,
    HighestHealthSingleEnemy,
    AllEnemies,
    DeadEnemy,
    AllDeadEnemies,
    LowestHealthSingleAlly,
    HighestHealthSingleAlly,
    AllAllies,
    DeadAlly,
    AllDeadAllies,
}