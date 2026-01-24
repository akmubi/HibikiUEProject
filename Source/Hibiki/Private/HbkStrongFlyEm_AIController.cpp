#include "HbkStrongFlyEm_AIController.h"

AHbkStrongFlyEm_AIController::AHbkStrongFlyEm_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RotationInterpSpeed = 5.00f;
    this->BaseDistance = 500.00f;
    this->MoveThresholdDistance = 1000.00f;
    this->MoveBlendSpaceRange = 100.00f;
    this->HorizontalMoveCheckLength = 400.00f;
    this->HorizontalMoveValueInterpSpeed = 1.00f;
    this->HorizontalMoveThresholdForwardRate = 0.80f;
    this->MoveValueAttenuationInterpSpeed = 3.00f;
    this->FlyHeightInterpSpeedOnAttackInterval = 1.00f;
    this->FallDownForceEndCount = 1;
    this->AttackIntervalAfterFalldownForceEnd = 6.00f;
    this->AttackRunCount = 4;
    this->CurrentAttackRunCount = 0;
    this->MoveVelocityScale = 1.50f;
    this->AttackIntervalBaseCount = 0.00f;
    this->AttackIntervalRunAllAttack = 8.00f;
    this->MaxFarAttackCount = 2;
    this->AvoidRequestDamageCount = 5;
    this->CounterAttackRequestDamageCount = 4;
    this->TiredDownCountMinHealthRate = 0.20f;
    this->TiredDownCountMaxHealthRate = 0.80f;
    this->TiredDownCountMinBase = 2.00f;
    this->TiredDownCountMaxBase = 8.00f;
    this->TiredRequestCount = 3;
    this->AfterAttackDashWaitCount = 3.00f;
    this->DownStateEndAttackCount = 6;
    this->DashAttackMoveCheckLength = 1500.00f;
    this->DashAttackMoveDecelerateInterpSpeed = 5.00f;
    this->DashAttackMoveMinScale = 0.10f;
    this->DashAttackDirCheckAngleDiff = 20.00f;
    this->DashAttackDirInterpSpeedOnHitObject = 20.00f;
    this->DashAttackDirLimitOnSection = 240.00f;
}

void AHbkStrongFlyEm_AIController::SetTiredRequest(bool bEnabled) {
}

void AHbkStrongFlyEm_AIController::SetTiredCount(int32 Count) {
}

void AHbkStrongFlyEm_AIController::SetReservedAttackAfterMagnetCatch(bool bEnabled) {
}

void AHbkStrongFlyEm_AIController::SetHitTargetDuringAttacking(bool bHit) {
}

void AHbkStrongFlyEm_AIController::SetExtraAttackCount(int32 ExCount) {
}

void AHbkStrongFlyEm_AIController::SetDuringMagnetCatchRecieve(bool bDuring) {
}

void AHbkStrongFlyEm_AIController::SetDefaultAttackInterval() {
}

void AHbkStrongFlyEm_AIController::SetCounterAttackRequestDamageCount(int32 Count) {
}

void AHbkStrongFlyEm_AIController::SetCounterAttackRequest(bool bEnabled) {
}

void AHbkStrongFlyEm_AIController::SetContinuousAttack(bool bEnabled) {
}

void AHbkStrongFlyEm_AIController::SetAvoidRequestDamageCount(int32 Count) {
}

void AHbkStrongFlyEm_AIController::SetAvoidRequest(bool bEnabled) {
}

void AHbkStrongFlyEm_AIController::SetAttackInterval(float IntervalCount) {
}

bool AHbkStrongFlyEm_AIController::IsEnabledFarAttack() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::IsEnabledAfterAttackDash() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::IsDuringMagnetCatch() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::IsDuringGrapping() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::IsDuringAttackInterval() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::GetTiredRequest() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::GetReservedAttackAfterMagnetCatch() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::GetHitTargetDuringAttacking() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::GetExecFirstDashAttack() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::GetDuringMagnetCatchRecieve() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::GetCounterAttackRequest() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::GetContinuousAttack() const {
    return false;
}

bool AHbkStrongFlyEm_AIController::GetAvoidRequest() const {
    return false;
}


