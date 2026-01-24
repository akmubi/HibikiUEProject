#include "HbkPlayerSpecialAttackObj_360.h"

AHbkPlayerSpecialAttackObj_360::AHbkPlayerSpecialAttackObj_360(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayAnim = NULL;
    this->ValidDecoyNoteCount = 12;
    this->VanishDuration = 0.50f;
    this->HologramCharaPostActivateGroup = EHbkHologramCharaPostActivateGroup::HologramCharaPostNoActivate;
    this->StartSE = NULL;
    this->EndSE = NULL;
}

void AHbkPlayerSpecialAttackObj_360::OnGenerateOtherDecoy(const FGameplayTag& SpAttackTag) {
}

void AHbkPlayerSpecialAttackObj_360::OnEndDecoy() {
}

void AHbkPlayerSpecialAttackObj_360::OnAbortDecoy() {
}


