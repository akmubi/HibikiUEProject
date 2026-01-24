#include "HbkGimmick_SecDHatch.h"

AHbkGimmick_SecDHatch::AHbkGimmick_SecDHatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->DefaultOpen = false;
    this->NoReactionRange = -1.00f;
    this->OpenCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->bOpenCloseSave = EHbkGimmick_SecDHatchSaveType::HOC_NONE;
}

void AHbkGimmick_SecDHatch::OnNoteQuarter_SecDHatch(int32 NoteCount, bool bDownBeat) {
}


