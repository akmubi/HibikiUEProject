#include "HbkGimmick_SecDClosedLaser.h"

AHbkGimmick_SecDClosedLaser::AHbkGimmick_SecDClosedLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveState = EHbkGimmick_SecDClosedLaserSaveType::SCL_NONE;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->pDisarmSE = NULL;
    this->pLockSE = NULL;
    this->pUnlockSE = NULL;
}

void AHbkGimmick_SecDClosedLaser::OnBeatEvent_SecDClosedLaser(int32 NoteCount, bool bDownBeat) {
}


