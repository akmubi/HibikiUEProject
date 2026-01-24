#include "HbkStrongFlyEm_Character.h"

AHbkStrongFlyEm_Character::AHbkStrongFlyEm_Character(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DisabledReactByPlayerActionHealthRate = 0.40f;
    this->DodgeReactEndLoopTimeCount = 6.00f;
    this->bForceAdjustHeight = false;
    this->PinchHealthRate = 0.50f;
    this->TiredDownAnim = NULL;
    this->TiredEndAvoidAnim = NULL;
    this->ReactionCommonDamageSectionName_OnTired.AddDefaulted(3);
    this->PreGrapping_InAttachTimeToCamera = 0.20f;
    this->bIsSyncBeat = false;
    this->InAttachTimeToTarget = 1.00f;
    this->bIsAttachSweepToTarget = false;
    this->InAttachTimeToCamera = 0.00f;
    this->PositionCorrectionDivisionNumber = 8;
    this->PositionCorrectionDistance = 1000.00f;
    this->PositionCorrectionTraceType = TraceTypeQuery2;
    this->bSimpleRhythmAttackMode = false;
    this->bUseRhythmAttackTransOnGrappling = false;
    this->CameraBlendOutTimeOnAttackToPlayer = 0.10f;
    this->RhythmAttackBaseHeight = 550.00f;
    this->InstantKillHeightOffset = 150.00f;
    this->pDashAtackEffect = NULL;
}

void AHbkStrongFlyEm_Character::SetForceAdjustHeight(bool bForce) {
}

void AHbkStrongFlyEm_Character::Receive_OnChangedHealth(float CurrentHealth, float OldHealth, float HealthRate) {
}

void AHbkStrongFlyEm_Character::OnToughValueDeactive() {
}

void AHbkStrongFlyEm_Character::OnToughDeactive() {
}

bool AHbkStrongFlyEm_Character::GetPinchState() {
    return false;
}

bool AHbkStrongFlyEm_Character::GetForceAdjustHeight() const {
    return false;
}


