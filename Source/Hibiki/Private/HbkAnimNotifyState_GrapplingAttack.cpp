#include "HbkAnimNotifyState_GrapplingAttack.h"

UHbkAnimNotifyState_GrapplingAttack::UHbkAnimNotifyState_GrapplingAttack() {
    this->AttackSocketName = TEXT("Origin");
    this->OverrideDamageType = NULL;
    this->bContinuousHit = false;
    this->bIsSyncBeat = true;
    this->bIsStartImmediately = true;
    this->bIsStartGrapplingWithNotifyEnd = false;
    this->InAttachTimeToTarget = 10.00f;
    this->bIsAttachSweepToTarget = true;
    this->InAttachTimeToCamera = 0.00f;
    this->bIsStartImmediatelyOfUntilStarted = true;
    this->bIsStartGrapplingWithNotifyEndOfUntilStarted = false;
    this->bIsSyncBeatOfUntilStarted = true;
    this->UntilStartedInAttachTimeToTarget = 0.00f;
    this->bIsStartImmediatelyOfPositionCorrection = true;
    this->PositionCorrectionDivisionNumber = 0;
    this->PositionCorrectionDistance = 0.00f;
    this->PositionCorrectionOffsetHeight = 0.00f;
    this->bIsAdjustPositionCorrectionForGround = false;
    this->PositionCorrectionTraceType = TraceTypeQuery1;
    this->bSimpleRhythmAttackMode = false;
    this->bUseRhythmAttackAnchorTrans = false;
    this->RatioToTotalDurationForAttack = 1.00f;
}


