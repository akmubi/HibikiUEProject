#include "HbkPlayerSpecialAttackComponent.h"

UHbkPlayerSpecialAttackComponent::UHbkPlayerSpecialAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpecialAttacParamAsset = NULL;
    this->EquipSlotMax = 2;
    this->CurrentSlotNum = 1;
    this->SpAttackCutInWidgetClass = NULL;
    this->SpAttackSuccessSectionName = TEXT("Attack");
    this->SpAttackFailedSectionName = TEXT("Failed");
}

void UHbkPlayerSpecialAttackComponent::OnStartRhythmScore() {
}

void UHbkPlayerSpecialAttackComponent::OnSpAttackObjLoadCompleted() {
}

void UHbkPlayerSpecialAttackComponent::OnSpAttackLoadCompleted() {
}

void UHbkPlayerSpecialAttackComponent::OnRhythmScoreResult(float TotalScoreRate) {
}

void UHbkPlayerSpecialAttackComponent::OnEndCombat() {
}

void UHbkPlayerSpecialAttackComponent::HideSpecialAttackCutIn(int32 NoteCount) {
}

bool UHbkPlayerSpecialAttackComponent::EquipSpAttack(FGameplayTag SpAttackTag, int32 SlotIndex) {
    return false;
}


