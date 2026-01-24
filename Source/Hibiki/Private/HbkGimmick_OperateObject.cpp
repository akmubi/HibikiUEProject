#include "HbkGimmick_OperateObject.h"

AHbkGimmick_OperateObject::AHbkGimmick_OperateObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ActivateDelayNote = 1;
    this->DeactivateDelayNote = 1;
    this->bReverse = false;
    this->ParamRowName = TEXT("Default");
    this->DeactivateParamRowName = TEXT("Default");
    this->HologramPostActivateGroup = EHbkHologramPostActivateGroup::HologramPostNoActivate;
    this->CharaParamRowName = TEXT("Default");
    this->DeactivateCharaParamRowName = TEXT("Default");
    this->HologramCharaPostActivateGroup = EHbkHologramCharaPostActivateGroup::HologramCharaPostNoActivate;
    this->bActive = false;
}

void AHbkGimmick_OperateObject::OnReadyGimmick(AHbkGimmickBase* GimmickBase) {
}


