#include "HbkGimmick_RhythmFloor.h"

AHbkGimmick_RhythmFloor::AHbkGimmick_RhythmFloor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bControllToOutside = false;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn2;
    this->Type = AHbkGimmick_RhythmFloorType::PushPop;
    this->bReverseScale = false;
    this->bPopStart = false;
    this->bPopEnd = false;
    this->bPopAnim = false;
    this->bControllFirstPop = false;
    this->DelayCount = 0;
    this->PopSignCount = 1;
    this->PopCount = 1;
    this->PopWaitCount = 4;
    this->PushSignCount = 1;
    this->PushCount = 1;
    this->PushWaitCount = 2;
    this->PopStartSeRef = NULL;
    this->PopEndSeRef = NULL;
    this->PushStartSeRef = NULL;
    this->PushEndSeRef = NULL;
    this->MoveStepCount = 1;
    this->StayStepCount = 1;
    this->PointMoveNoteNum = 1;
    this->bReverseLoop = true;
    this->MoveStartSeRef = NULL;
    this->MoveEndSeRef = NULL;
    this->bActivateAttachedActor = true;
    this->bSaved = false;
    this->bActive = false;
    this->bActivetedOnce = false;
    this->SplineComp = NULL;
    this->StaticMeshComp = NULL;
    this->AkComp = NULL;
}


