#include "HbkEqualizerWingAttackComponent.h"

UHbkEqualizerWingAttackComponent::UHbkEqualizerWingAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivateNoteType = EHbkNote::Note_8th;
    this->ActivateNoteCount = 1;
    this->AttackDurationNoteType = EHbkNote::Note_Quarter;
    this->AttackDurationNoteCount = 2.00f;
}

void UHbkEqualizerWingAttackComponent::TestNone() {
}

void UHbkEqualizerWingAttackComponent::TestDeactivate() {
}

void UHbkEqualizerWingAttackComponent::TestActivate() {
}

void UHbkEqualizerWingAttackComponent::SetProcessNone() {
}

void UHbkEqualizerWingAttackComponent::SetProcessDeactivate() {
}

void UHbkEqualizerWingAttackComponent::SetProcessActivate() {
}

void UHbkEqualizerWingAttackComponent::AddAllAttackInfo() {
}


