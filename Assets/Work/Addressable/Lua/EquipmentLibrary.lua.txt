function Warrior(caster, targets)
    local skillData = caster.SkillData;
    local damage = skillData.strength + caster.InBattleStatus.Attack * skillData.multiply;
    for _, target in ipairs(targets) do
        target.InBattleStatus.Health = math.max(0, target.InBattleStatus.Health - damage)
    end
    print("LuaLibrary.Skill.Warrior")
end

function Warhammer(caster, targets)
    local skillData = caster.SkillData;
    local damage = skillData.strength + caster.InBattleStatus.Attack * skillData.multiply;
    for _, target in ipairs(targets) do
        target.InBattleStatus.Health = math.max(0, target.InBattleStatus.Health - damage)
        CS.ActorUtility.AddBuffToActor(caster, targets, skillData.buffType, skillData.buffDuration, skillData.buffStrength);
    end
    print("LuaLibrary.Skill.Warhammer")
end