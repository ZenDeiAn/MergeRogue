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
    /// <summary>
    /// string = MergeCardID, bool = is action for remove card from grid.
    /// </summary>
    public Dictionary<string, Action<ActorStatus, MergeLevel, bool>> MergeCardLibrary { get; private set; }

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
            target.canvasActor.UpdateCanvas();
            
            // Animation
            if (buffType == BuffType.None)
            {
                target.animator.SetTrigger(target.Status.health == 0 ? Die : Hurt);
            }
            else
            {
                target.animator.SetFloat(Idle, (int)buffType);
            }
            Debug.Log($"{source}->{target} : {critical} : {damage} : {source.Status.CriticalDamageCalculated}");
        }
    }
    
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

    private void MeleeActionLogic(Actor actor, List<Actor> targets, int animation, Action completed)
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
            actor.animator.SetTrigger(animation);
            
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
                                    actor.StopCoroutine(moveCoroutine); 
                                    actor.LoopUntil(() => moving >= 0, () =>
                                        actor.animator.SetFloat(Moving,
                                            moving = Mathf.Clamp(moving + Time.deltaTime * 10, -1, 0)));
                                    completed?.Invoke();
                                });
                        });
                });
        });
    }

    private int CalculateTotalAttackCombo(Actor source)
    {
        int combo = 0;
        while (combo < source.Status.ComboMaximumCalculated)
        {
            if (Random.Range(0.0f, 1.0f) < source.Status.CriticalChanceCalculated)
                combo++;
            else
                break;
        }
        return combo;
    }

    private IEnumerator CommonAttackLogic(Actor actor, List<Actor> targets, int animation)
    {
        int combo = CalculateTotalAttackCombo(actor) + 1;
        bool actionEnd = true;
        while (combo > 0)
        {
            if (actionEnd)
            {
                actionEnd = false;
                MeleeActionLogic(actor, targets, animation, () => actionEnd = true);
                combo--;
            }
            yield return null;
        }

        yield return new WaitUntil(() => actionEnd);
        actor.ActingType = ActType.Idle;
    }
    
    public void Initialize()
    {
        ActorAttackLibrary = new Dictionary<string, Action<Actor, List<Actor>>>
        {
            { "Warrior", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.HighestHealthSingleEnemy);
                    source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    source.StartCoroutine(CommonAttackLogic(source, targetList, Attack));
                }
            },
            { "Warhammer", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.LowestHealthSingleEnemy);
                    source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    source.StartCoroutine(CommonAttackLogic(source, targetList, Attack));
                }
            },
            { "Slime", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.HighestHealthSingleAlly);
                    source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    source.StartCoroutine(CommonAttackLogic(source, targetList, Attack));
                }
            },
            { "NagaWizard", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.LowestHealthSingleAlly);
                    source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    source.StartCoroutine(CommonAttackLogic(source, targetList, Attack));
                }
            },
            { "FlyingDemon", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.LowestHealthSingleAlly);
                    source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    source.StartCoroutine(CommonAttackLogic(source, targetList, Attack));
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

        MergeCardLibrary = new Dictionary<string, Action<ActorStatus, MergeLevel, bool>>
        {
            { "SpeedUp", (a, m, remove) =>
            {
                int modifier = (int)AddressableManager.Instance.MergeCardDataLibrary["SpeedUp"].Multiplies[m];
                a.speedAdditional += remove ? -modifier : modifier;
            }},
            { "AttackUp", (a, m, remove) => {
                int modifier = (int)AddressableManager.Instance.MergeCardDataLibrary["AttackUp"].Multiplies[m];
                a.attackAdditional += remove ? -modifier : modifier;
            }},
            { "ShieldUp", (a, m, remove) => {
                int modifier = (int)AddressableManager.Instance.MergeCardDataLibrary["ShieldUp"].Multiplies[m];
                a.shieldAdditional += remove? -modifier : modifier;
            }},
            { "HealthStealthUp", (a, m, remove) => {
                float modifier = AddressableManager.Instance.MergeCardDataLibrary["HealthStealthUp"].Multiplies[m];
                a.healthStealthAdditional += remove? -modifier : modifier;
            }},
            { "DodgeUp", (a, m, remove) => {
                float modifier = AddressableManager.Instance.MergeCardDataLibrary["DodgeUp"].Multiplies[m];
                a.dodgeAdditional += remove? -modifier : modifier;
            }},
            { "CriticalChanceUp", (a, m, remove) => {
                float modifier = AddressableManager.Instance.MergeCardDataLibrary["CriticalChanceUp"].Multiplies[m];
                a.criticalChanceAdditional += remove? -modifier : modifier;
            }},
            { "CriticalDamageUp", (a, m, remove) => {
                float modifier = AddressableManager.Instance.MergeCardDataLibrary["CriticalDamageUp"].Multiplies[m];
                a.criticalDamageAdditional += remove? -modifier : modifier;
            }},
            { "ComboChanceUp", (a, m, remove) => {
                float modifier = AddressableManager.Instance.MergeCardDataLibrary["ComboChanceUp"].Multiplies[m];
                a.comboChanceAdditional += remove? -modifier : modifier;
            }},
            { "ComboMaximumUp", (a, m, remove) => {
                int modifier = (int)AddressableManager.Instance.MergeCardDataLibrary["ComboMaximumUp"].Multiplies[m];
                a.comboMaximumAdditional += remove? -modifier : modifier;
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