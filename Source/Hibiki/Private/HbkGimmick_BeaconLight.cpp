#include "HbkGimmick_BeaconLight.h"

AHbkGimmick_BeaconLight::AHbkGimmick_BeaconLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveType = EHbkGimmick_BeaconLightSaveType::BL_SVT_NONE;
}

void AHbkGimmick_BeaconLight::OnNoteWhole_Event(int32 NoteCount, bool bDownBeat) {
}


