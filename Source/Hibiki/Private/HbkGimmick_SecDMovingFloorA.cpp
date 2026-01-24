#include "HbkGimmick_SecDMovingFloorA.h"

AHbkGimmick_SecDMovingFloorA::AHbkGimmick_SecDMovingFloorA(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->NoteType = EHbkNote::None;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->loopFlag = false;
    this->OpenWaitCount = 0;
    this->CloseWaitCount = 0;
    this->pOpenStartSE = NULL;
    this->pOpenEndSE = NULL;
    this->pCloseStartSE = NULL;
    this->pCloseEndSE = NULL;
}

void AHbkGimmick_SecDMovingFloorA::OnHalfEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDMovingFloorA::OnCommonResourceLoadEnd() {
}

void AHbkGimmick_SecDMovingFloorA::OnBeatEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDMovingFloorA::OnBarEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDMovingFloorA::On8thEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SecDMovingFloorA::On16thEvent_SecDMovingFloor(int32 NoteCount, bool bDownBeat) {
}


