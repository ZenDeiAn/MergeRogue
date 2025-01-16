FunctionLibrary.Battle = {

    ActionLegalCheck_Attack = function(target)
        if (target.Status.Buff.ContainsKey(BuffType.Stun)) then
            if (target.Status.Buff[BuffType.Stun].duration > 0) then
                return false
            end
        end
        return true
    end
    ,
    ActionLegalCheck_Skill = function(target)
        if (target.Status.Buff.ContainsKey(BuffType.Silence)) then
            if (target.Status.Buff[BuffType.Silence].duration > 0) then
                return false
            end
        end
        return true
    end
    ,
    CalculateNormalDamage = function(caster, target)
        local damage = caster.Status.Attack
        if (CalculateCritical(caster.Status.Critical)) then
            damage = math.floor(damage * caster.Status.CriticalDamage)
        end
        local healthDamage = damage - target.ArmedShield
        target.Status.UpdateArmedShield(damage)
        target.Status.UpdateHealth(health)
        print("LuaLibrary.Action.CalculateNormalDamage")
    end
}

FunctionLibrary.Battle = {

    BuffCheck = function(target)
        local buffs = target.Status.Buff -- Assuming this is a dictionary

        for buffType, buffData in pairs(buffs) do
            if buffData.duration > 0 then
                if buffType == CS.BuffType.Stun then
                    print(target.Status.source:GetName() .. " is stunned and cannot act.")
                    return false

                elseif buffType == CS.BuffType.Freeze then
                    target.Status.Shield = target.Status.Speed / 2
                    print(target.Status.source:GetName() .. " speed reduced by 20%.")

                elseif buffType == CS.BuffType.Silence then
                    if target.CurrentAction == CS.ActionType.Skill then
                        print(target.Status.source:GetName() .. " is silenced and cannot use skills.")
                        return false
                    else
                        buffData.duration = buffData.duration + 1
                    end

                elseif buffType == CS.BuffType.Exhaust then
                    target.Status.Attack = target.Status.Attack * 0.8
                    print(target.Status.source:GetName() .. " damage is reduced by 20%.")

                elseif buffType == CS.BuffType.DoT then
                    target.Status.Health = math.max(0, target.Status.Health - buffData.strength)
                    print(string.format("%s takes %d damage due to DoT.", target.Status.source:GetName(), buffData.strength))

                elseif buffType == CS.BuffType.Regen then
                    target.Status.Health = math.min(target.Status.Health + buffData.strength, target.Status.Health)
                    print(string.format("%s heals %d health due to Regen.", target.Status.source:GetName(), buffData.strength))

                else
                    print("Unknown buff type: " .. tostring(buffType))
                end
                -- Decrease duration
                buffData.duration = buffData.duration - 1
            end
        end

        print("LuaLibrary.Buff.BuffCheck")
        return true
    end

}

-- Utility functions 
function CalculateCritical(criticalChance)
    if math.random() <= criticalChance then
        return true
    end
    return false
end

function GetRandomAlly()

end

function GetAllAlly()

end

function GetUnhealthestAlly()

end

function GetHealthestAlly()

end

function GetRandomEnemy()

end

function GetAllEnemy()

end

function GetUnhealthestEnemy()
    local monsters = CS.BattleManager.Instance.monsters
    local target = monsters[1]
    for i = 2, monsters.Count do
        if (target.Status.Health > monsters[i].Status.Health)
        {
            target = monsters[i]
        }
    end
    return target
end

function GetHealthestEnemy()
    local monsters = CS.BattleManager.Instance.monsters
    local target = monsters[1]
    for i = 2, monsters.Count do
        if (target.Status.Health < monsters[i].Status.Health)
        {
            target = monsters[i]
        }
    end
    return target
end

function BuffToActor(caster, target, buffType, duration, strength)
    local buffData = BuffData()
    buffData.source = caster
    buffData.type = buffType
    buffData.duration = duration
    buffData.strength = strength
    target.Buff[buffType] = buffData
end