#include "HbkEnemyBurningComponent.h"

UHbkEnemyBurningComponent::UHbkEnemyBurningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseTouchAttack = false;
    this->TouchAttackComponentTagName = TEXT("BurningTouchAttackComponent");
}

void UHbkEnemyBurningComponent::SetDisabledChangeBurning(bool bDisabled) {
}

bool UHbkEnemyBurningComponent::SetBurningState(bool bEnabled) {
    return false;
}

void UHbkEnemyBurningComponent::OnBeatEvent(int32 NoteCount) {
}

bool UHbkEnemyBurningComponent::IsDisabledChangeBurningState() const {
    return false;
}

bool UHbkEnemyBurningComponent::IsBurningState() const {
    return false;
}

void UHbkEnemyBurningComponent::EnabledBurning() {
}

void UHbkEnemyBurningComponent::DisabledBurning() {
}


