#include "HbkPlayerRhythmJumpComponent.h"

UHbkPlayerRhythmJumpComponent::UHbkPlayerRhythmJumpComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UIScale = 1.50f;
}

void UHbkPlayerRhythmJumpComponent::OnOwnerMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity) {
}

void UHbkPlayerRhythmJumpComponent::OnChangeControlAP() {
}

void UHbkPlayerRhythmJumpComponent::ChangeRhythmJumpMode(int32 JumpCount) {
}


