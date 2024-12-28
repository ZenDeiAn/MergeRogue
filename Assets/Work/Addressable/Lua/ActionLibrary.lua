-- Actions ============================================================================================

function CheckActionLegalAndApplyBuff(caster, target)
    print("LuaLibrary.Action.CheckActionLegalAndApplyBuff")
    return BuffCheck(caster)
end 

function CalculateNormalDamage(caster, target)
    local damage = caster.InBattleStatus.Attack
    if math.random() <= caster.InBattleStatus.Critical then
        damage = math.floor(damage * caster.InBattleStatus.CriticalDamage)
    end
    target.InBattleStatus.Health = math.max(0, target.InBattleStatus.Health - damage);
    print("LuaLibrary.Action.CalculateNormalDamage")
end

-- Buffs ============================================================================================

function BuffCheck(target)
    local buffs = target.Status.Buff -- Assuming this is a dictionary

    for buffType, buffData in pairs(buffs) do
        if buffData.duration > 0 then
            if buffType == CS.BuffType.Stun then
                print(target.Status.source:GetName() .. " is stunned and cannot act.")
                return false

            elseif buffType == CS.BuffType.Freeze then
                target.InBattleStatus.Shield = target.Status.Speed / 2
                print(target.Status.source:GetName() .. " speed reduced by 20%.")

            elseif buffType == CS.BuffType.Silence then
                if target.CurrentAction == CS.ActionType.Skill then
                    print(target.Status.source:GetName() .. " is silenced and cannot use skills.")
                    return false
                else
                    buffData.duration = buffData.duration + 1
                end

            elseif buffType == CS.BuffType.Exhaust then
                target.InBattleStatus.Attack = target.Status.Attack * 0.8
                print(target.Status.source:GetName() .. " damage is reduced by 20%.")

            elseif buffType == CS.BuffType.DoT then
                target.InBattleStatus.Health = math.max(0, target.InBattleStatus.Health - buffData.strength)
                print(string.format("%s takes %d damage due to DoT.", target.Status.source:GetName(), buffData.strength))

            elseif buffType == CS.BuffType.Regen then
                target.InBattleStatus.Health = math.min(target.InBattleStatus.Health + buffData.strength, target.Status.Health)
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