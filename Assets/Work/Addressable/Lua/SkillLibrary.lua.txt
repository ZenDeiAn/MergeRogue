FunctionLibrary.Skill = {

    Warrior = function(caster)
        GetUnhealthestEnemy().Status.UpdateHealth(-caster.Status.Attack * 1.5 + 15)
        print("LuaLibrary.Skill.Warrior")
    end
    ,
    Warhammer = function(caster)
        local target = GetHealthestEnemy()
        target.Status.UpdateHealth(caster.Status.Attack * 2.0)
        BuffToActor(caster, target, BuffType.Stun, 1, 0)
        print("LuaLibrary.Skill.Warhammer")
    end

}