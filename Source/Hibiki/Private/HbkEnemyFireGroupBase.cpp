#include "HbkEnemyFireGroupBase.h"

AHbkEnemyFireGroupBase::AHbkEnemyFireGroupBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FireClass = NULL;
    this->TargetPointEnableFireNum = 4;
    this->bCreateDynamicTargetPoint = true;
    this->bDestroyActiveVFXOnDeactive = true;
}

void AHbkEnemyFireGroupBase::OnRecieveDisabled(bool DisableByDamage) {
}

void AHbkEnemyFireGroupBase::OnBeginRhythmParryAttack() {
}


