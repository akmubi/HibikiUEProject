#include "HbkGrapplingInfo.h"

FHbkGrapplingInfo::FHbkGrapplingInfo() {
    this->bIsSyncBeat = false;
    this->bIsStartImmediately = false;
    this->InAttachTimeToTarget = 0.00f;
    this->bIsAttachSweepToTarget = false;
    this->InAttachTimeToCamera = 0.00f;
    this->bIsStartImmediatelyOfUntilStarted = false;
    this->bIsSyncBeatOfUntilStarted = false;
    this->UntilStartedInAttachTimeToTarget = 0.00f;
    this->bIsStartImmediatelyOfPositionCorrection = false;
    this->PositionCorrectionDivisionNumber = 0;
    this->PositionCorrectionDistance = 0.00f;
    this->PositionCorrectionOffsetHeight = 0.00f;
    this->bIsAdjustPositionCorrectionForGround = false;
    this->PositionCorrectionTraceType = TraceTypeQuery1;
    this->bIsSimpleRhythmAttackMode = false;
    this->bUseRhythmAttackAnchorTrans = false;
}

