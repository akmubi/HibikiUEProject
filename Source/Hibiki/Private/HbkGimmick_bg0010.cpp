#include "HbkGimmick_bg0010.h"

AHbkGimmick_bg0010::AHbkGimmick_bg0010(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->SplineConveyor = NULL;
    this->Type = EHbkGimmick_bg0010Type::Type00;
    this->bLuggage = false;
    this->LayoutLength = 0.00f;
    this->LayoutPoint = 1;
    this->LowerCount = 2;
    this->LoweredCount = 2;
    this->RepairCount = 4;
    this->RaiseCount = 2;
    this->RaisedCount = 2;
    this->PreviewState = EHbkGimmick_bg0010State::Lower;
    this->bSaved = false;
    this->bActive = false;
}

void AHbkGimmick_bg0010::TransitionStateRepair(int32 InRepairNoteCount) {
}

void AHbkGimmick_bg0010::TransitionStateRaise(int32 InRaiseNoteCount, int32 InterlockCounter) {
}

void AHbkGimmick_bg0010::TransitionStateLower(int32 InLowerNoteCount) {
}




void AHbkGimmick_bg0010::Layout() {
}

bool AHbkGimmick_bg0010::IsEditor() const {
    return false;
}

EHbkGimmick_bg0010State AHbkGimmick_bg0010::GetState() const {
    return EHbkGimmick_bg0010State::Raise;
}

float AHbkGimmick_bg0010::GetRepairPlayRate() const {
    return 0.0f;
}

float AHbkGimmick_bg0010::GetRaisePlayRate() const {
    return 0.0f;
}

float AHbkGimmick_bg0010::GetLowerPlayRate() const {
    return 0.0f;
}

float AHbkGimmick_bg0010::GetBasePlayRate() const {
    return 0.0f;
}


