#include "HbkGimmick_SplineConveyor.h"

AHbkGimmick_SplineConveyor::AHbkGimmick_SplineConveyor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bDeactivatePeripherals = false;
    this->MovementDistance = 600.00f;
    this->curveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn2;
    this->StartNoteCount = 1;
    this->DelayCount = 0;
    this->MoveCount = 2;
    this->StayCount = 0;
    this->OnlyOnceWhenActivate = false;
    this->UnitBeltLength = 500.00f;
    this->BeltTextureOffset = 0.00f;
    this->CarryPlayerCollisionChannel = TraceTypeQuery1;
    this->MoveStartSeRef = NULL;
    this->MoveSeRef = NULL;
    this->bSaved = false;
    this->bActive = false;
}


