#include "HbkEm6000_AnimInstance.h"

UHbkEm6000_AnimInstance::UHbkEm6000_AnimInstance() {
    this->bIsMove = false;
    this->bIsPrevMove = false;
    this->bIsMoveRun = false;
    this->MoveDirectionLocalAlpha = 0.10f;
    this->bIsDisableMoveLerpForStartMove = false;
    this->bIsLookMoveTarget = false;
    this->InterpSpeedByLookMoveTargetOnStopping = 10.00f;
    this->InterpSpeedByLookMoveTargetOnMoving = 2.00f;
    this->bIsTransforming = false;
    this->HeadLookIkWeightOverride = 0.00f;
    this->HeadLookDisableTimer = 0.00f;
}

void UHbkEm6000_AnimInstance::StopOwneningActorOnTurning() {
}

void UHbkEm6000_AnimInstance::SetLookMoveTargetEnable(bool LookTargetEnable) {
}

void UHbkEm6000_AnimInstance::RotateOwneningActorToMoveTarget() {
}

void UHbkEm6000_AnimInstance::OnNoReactionDamage() {
}

bool UHbkEm6000_AnimInstance::IsPlayingDamageSlotAnimation() const {
    return false;
}

bool UHbkEm6000_AnimInstance::IsPlayingAttackSlotAnimation() const {
    return false;
}

bool UHbkEm6000_AnimInstance::IsPlayingAnySlotAnimations() const {
    return false;
}

bool UHbkEm6000_AnimInstance::IsPlayingActionSlotAnimation() const {
    return false;
}

bool UHbkEm6000_AnimInstance::IsOwneningActorOnTurning() const {
    return false;
}

bool UHbkEm6000_AnimInstance::IsOwneningActorOnMoving() const {
    return false;
}

void UHbkEm6000_AnimInstance::DebugSetForceMoveEnable(bool bIsEnable) {
}

void UHbkEm6000_AnimInstance::DebugSetForceMoveDirection(const FVector& Direction, float Throttle) {
}


