#include "HbkGimmick_AirShooter.h"

AHbkGimmick_AirShooter::AHbkGimmick_AirShooter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->StartNoteCount = 1;
    this->MovementDistance = 600.00f;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn2;
    this->MoveCount = 2;
    this->StayCount = 0;
    this->FlowPatternIndex = 0;
    this->FlowLuggageMeshIndex = 0;
    this->bSaved = false;
    this->bActive = false;
}

void AHbkGimmick_AirShooter::OnCreateMoveVfx() {
}


