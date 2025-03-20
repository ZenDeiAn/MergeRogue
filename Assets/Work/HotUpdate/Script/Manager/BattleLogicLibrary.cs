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
    public readonly float MELEE_DISTANCE_OFFSET = 0.25f;

    public Dictionary<string, Action<Actor, List<Actor>>> ActorAttackLibrary { get; private set; }
    public Dictionary<string, Action<Actor, List<Actor>>> ActorSkillLibrary { get; private set; }
    public Dictionary<string, List<ObserverSubscribeData>> RelicSubscriptionLibrary { get; private set; }
    /// <summary>
    /// string = MergeCardID, bool = is action for remove card from grid.
    /// </summary>
    public Dictionary<string, Action<ActorStatus, MergeLevel, bool>> MergeCardLibrary { get; private set; }
    public Dictionary<BuffType, BuffLogicData> BuffLibrary { get; private set; }

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
    
    public void ActorDamageToTargets(Actor source, List<Actor> targets, float multiply = 1.0f, bool trueDamage = false, BuffInstance buffInstance = null)
    {
        foreach (var target in targets)
        {
            bool critical = Random.Range(0.0f, 1.0f) <=
                            Mathf.Clamp(source.Status.CriticalChanceCalculated.ToPercentage(), 0, 1);
        
            int damage = source.Status.AttackCalculated;
            damage =
                (int)((critical ? damage * source.Status.CriticalDamageCalculated.ToPercentage() : damage) * multiply);
            if (!trueDamage)
            {
                int damageTemp = Mathf.Max(damage - target.Status.armedShield, 0);
                target.Status.armedShield = Mathf.Max(target.Status.armedShield - damage, 0);
                damage = damageTemp;
            }

            bool dodged = Random.Range(0.0f, 1.0f) < target.Status.DodgeCalculated;

            if (dodged && !target.Status.BuffAlive(BuffType.Stun))
            {
                target.animator.SetTrigger(AnimationHashKey.Dodge);
                Debug.Log($"{source}->{target} : dodged!!!!!!");
            }
            else
            {
                // Animation
                if (buffInstance != null && buffInstance.type != BuffType.None)
                {
                    target.Status.AddBuff(buffInstance);
                }
                target.Status.UpdateHealth(-damage);
                target.animator.SetTrigger(target.Status.health == 0 ? AnimationHashKey.Die : AnimationHashKey.Hurt);
                
                source.Status.UpdateSkillCharging();
                Debug.Log($"{source}->{target} : {critical} : {damage} : {multiply} : {source.Status.CriticalDamageCalculated}");
            }
        }
    }
    
    private float GetModelForwardLength(SkinnedMeshRenderer skinnedMeshRenderer)
    {
        if (skinnedMeshRenderer == null) return 0f;

        Bounds bounds = skinnedMeshRenderer.bounds;
        Transform meshTransform = skinnedMeshRenderer.transform;

        Vector3 worldSize = Vector3.Scale(bounds.extents, meshTransform.lossyScale);

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
            targetPosition.x = Mathf.Max(GetModelForwardLength(target.meshRenderer) / 2, targetPosition.x);
        }
        targetPosition.x += GetModelForwardLength(actor.meshRenderer) / 2;
        targetPosition = center + targets[0].transform.forward * (targetPosition.x + MELEE_DISTANCE_OFFSET);

        // Start approach logic.
        // Animation
        float moving = 0;
        actor.animator.SetFloat(AnimationHashKey.Moving, moving);
        Coroutine moveCoroutine = actor.LoopUntil(() => moving >= 1, () =>
            actor.animator.SetFloat(AnimationHashKey.Moving, moving = Mathf.Min(moving + Time.deltaTime * 5, 1)));

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
                                actor.animator.SetFloat(AnimationHashKey.Moving,
                                    moving = Mathf.Max(moving - Time.deltaTime * 5, -1)));

                            actor.transform.DOMove(startPosition, 1f).SetEase(Ease.Linear).SetRelative(false)
                                .OnComplete(() =>
                                {
                                    actor.StopCoroutine(moveCoroutine); 
                                    actor.LoopUntil(() => moving >= 0, () =>
                                        actor.animator.SetFloat(AnimationHashKey.Moving,
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
            if (Random.Range(0.0f, 1.0f) < source.Status.ComboChanceCalculated.ToPercentage())
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
                    source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Attack));
                }
            },
            { "Warhammer", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.LowestHealthSingleEnemy);
                    source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Attack));
                }
            },
            { "Slime", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.HighestHealthSingleAlly);
                    source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Attack));
                }
            },
            { "NagarWizard", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.LowestHealthSingleAlly);
                    source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Attack));
                }
            },
            { "FlyingDemon", (source, targets) => {
                    var targetList = GetTargets(targets, SelectTargetsType.LowestHealthSingleAlly);
                    source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                    source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Attack));
                }
            },
        };
        
        ActorSkillLibrary = new Dictionary<string, Action<Actor, List<Actor>>>
        {
            { "Warrior", (source, targets) => {
                var targetList = GetTargets(targets, SelectTargetsType.HighestHealthSingleEnemy);
                source.ActionTriggerEvent = () =>
                {
                    Debug.Log($"ActionTriggerEvent : {targetList.Count}");
                    ActorDamageToTargets(source, targetList, 1.25f, false, new BuffInstance
                    {
                        type = BuffType.Stun,
                        source = source,
                        duration = 2
                    });
                    // Need add effect
                };
                source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Skill));
            }},
            { "Warhammer", (source, targets) => {
                var targetList = GetTargets(targets, SelectTargetsType.AllEnemies);
                source.ActionTriggerEvent = () =>
                {
                    ActorDamageToTargets(source, targetList);
                    // Need add effect
                };
                source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Skill));
            }},
            { "Slime", (source, targets) => {
                var targetList = GetTargets(targets, SelectTargetsType.HighestHealthSingleAlly);
                source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Skill));
            }},
            { "NagarWizard", (source, targets) => {
                var targetList = GetTargets(targets, SelectTargetsType.HighestHealthSingleAlly);
                source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Skill));
            }},
            { "FlyingDemon", (source, targets) => {
                var targetList = GetTargets(targets, SelectTargetsType.HighestHealthSingleAlly);
                source.ActionTriggerEvent = () => ActorDamageToTargets(source, targetList);
                source.StartCoroutine(CommonAttackLogic(source, targetList, AnimationHashKey.Skill));
            }},
        };

        MergeCardLibrary = new Dictionary<string, Action<ActorStatus, MergeLevel, bool>>
        {
            { "SpeedUp", (a, m, remove) =>
            {
                int modifier = AddressableManager.Instance.MergeCardDataLibrary["SpeedUp"].Multiplies[m];
                a.speedAdditional += remove ? -modifier : modifier;
            }},
            { "AttackUp", (a, m, remove) => {
                int modifier = AddressableManager.Instance.MergeCardDataLibrary["AttackUp"].Multiplies[m];
                a.attackAdditional += remove ? -modifier : modifier;
            }},
            { "ShieldUp", (a, m, remove) => {
                int modifier = AddressableManager.Instance.MergeCardDataLibrary["ShieldUp"].Multiplies[m];
                a.shieldAdditional += remove? -modifier : modifier;
            }},
            { "HealthStealthUp", (a, m, remove) => {
                int modifier = AddressableManager.Instance.MergeCardDataLibrary["HealthStealthUp"].Multiplies[m];
                a.healthStealthAdditional += remove? -modifier : modifier;
            }},
            { "DodgeUp", (a, m, remove) => {
                int modifier = AddressableManager.Instance.MergeCardDataLibrary["DodgeUp"].Multiplies[m];
                a.dodgeAdditional += remove? -modifier : modifier;
            }},
            { "CriticalChanceUp", (a, m, remove) => {
                int modifier = AddressableManager.Instance.MergeCardDataLibrary["CriticalChanceUp"].Multiplies[m];
                a.criticalChanceAdditional += remove? -modifier : modifier;
            }},
            { "CriticalDamageUp", (a, m, remove) => {
                int modifier = AddressableManager.Instance.MergeCardDataLibrary["CriticalDamageUp"].Multiplies[m];
                a.criticalDamageAdditional += remove? -modifier : modifier;
            }},
            { "ComboChanceUp", (a, m, remove) => {
                int modifier = AddressableManager.Instance.MergeCardDataLibrary["ComboChanceUp"].Multiplies[m];
                a.comboChanceAdditional += remove? -modifier : modifier;
            }},
            { "ComboMaximumUp", (a, m, remove) => {
                int modifier = AddressableManager.Instance.MergeCardDataLibrary["ComboMaximumUp"].Multiplies[m];
                a.comboMaximumAdditional += remove? -modifier : modifier;
            }},
        };

        BuffLibrary = new Dictionary<BuffType, BuffLogicData>
        {
            { BuffType.Regen,
                new BuffLogicData(new ObserverSubscribeData(
                    ObserverMessage.CharacterActionBegin,
                    o => {
                        BuffInstance instance = (BuffInstance)o;
                        instance.target.Status.UpdateHealth((int)instance.strength);
                        instance.target.Status.BuffProcess(instance.type);
                }))},
            { BuffType.DoT,
                new BuffLogicData(new ObserverSubscribeData(
                    ObserverMessage.CharacterActionEnd,
                    o => {
                        BuffInstance instance = (BuffInstance)o;
                        instance.target.Status.UpdateHealth(-(int)instance.strength);
                        instance.target.Status.BuffProcess(instance.type);
                }))},
            { BuffType.Exhaust,
                new BuffLogicData(bi => bi.target.Status.attackAdditional -= (int)bi.strength,
                    bi => bi.target.Status.attackAdditional += (int)bi.strength,
                    new ObserverSubscribeData(
                        ObserverMessage.CharacterActionEnd,
                        o => {
                            BuffInstance instance = (BuffInstance)o;
                            instance.target.Status.BuffProcess(instance.type);
                }))},
            { BuffType.Freeze,
                new BuffLogicData(bi => bi.target.Status.speedAdditional -= (int)bi.strength,
                    bi => bi.target.Status.speedAdditional += (int)bi.strength,
                    new ObserverSubscribeData(
                        ObserverMessage.CharacterActionEnd,
                        o => {
                            BuffInstance instance = (BuffInstance)o;
                            instance.target.Status.BuffProcess(instance.type);
                }))},
            { BuffType.BlackCatHead,
                new BuffLogicData(bi =>
                    {
                        bi.extra = new List<int>();
                        bi.target.Status.speedAdditional = -bi.target.Status.SpeedCalculated;
                    },
                    bi => bi.target.Status.speedAdditional += (int)bi.strength,
                    new ObserverSubscribeData(
                        ObserverMessage.TurnEnd,
                        o => {
                            BuffInstance instance = (BuffInstance)o;
                            instance.target.Status.BuffProcess(instance.type);
                        }))},
        };

        RelicSubscriptionLibrary = new Dictionary<string, List<ObserverSubscribeData>>()
        {
            { "BlackCatHead", new List<ObserverSubscribeData>() {
                    new ObserverSubscribeData(ObserverMessage.TurnBegin, o => {
                        foreach (var actor in BattleManager.Instance.actors.
                             Where(a => a.ActorType == (Random.Range(0, 4) == 0 ? ActorType.Ally : ActorType.Enemy)))
                        {
                            if (actor.Status.Health > 0)
                            {
                                actor.Status.AddBuff(new BuffInstance
                                {
                                    type = BuffType.BlackCatHead,
                                    duration = 1
                                });
                            }
                        }
                    }),
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