#include "HbkCharacterAnimInstance.h"

UHbkCharacterAnimInstance::UHbkCharacterAnimInstance() {
    this->bIsStrafing = false;
    this->bUseRootMotion = false;
    this->AGP_MoveThrottle = 0.00f;
    this->AGP_LocalYaw = 0.00f;
    this->FaceFXBlendAlpha = 0.00f;
}

void UHbkCharacterAnimInstance::UpdateRootMotionCurveMove(float DeltaSeconds, bool bSweep) {
}

void UHbkCharacterAnimInstance::UpdateCurveMoveTransform() {
}

void UHbkCharacterAnimInstance::SetStrafeEnable(bool StrafeEnable) {
}

void UHbkCharacterAnimInstance::SetMoveVelocityScale(float NewScale) {
}

void UHbkCharacterAnimInstance::SetActionTag(FGameplayTag ActTag, FHbkActionParam ActParam) {
}


void UHbkCharacterAnimInstance::InputMoveDirection(FVector WorldDirection, float Speed) {
}

FVector UHbkCharacterAnimInstance::GetMoveVelocityScaleVector() {
    return FVector{};
}


