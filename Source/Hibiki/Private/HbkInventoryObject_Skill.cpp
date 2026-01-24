#include "HbkInventoryObject_Skill.h"

UHbkInventoryObject_Skill::UHbkInventoryObject_Skill() {
    this->PartnerType = EHbkPartnerType::None;
    this->SpecialAttackIcon = NULL;
    this->SpecialAttackInvalidIcon = NULL;
}

EHbkSkillListStateType UHbkInventoryObject_Skill::GetSkillListState(UObject* WorldContextObject) const {
    return EHbkSkillListStateType::None;
}


