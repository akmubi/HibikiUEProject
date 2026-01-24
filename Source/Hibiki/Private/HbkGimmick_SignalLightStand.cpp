#include "HbkGimmick_SignalLightStand.h"

AHbkGimmick_SignalLightStand::AHbkGimmick_SignalLightStand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->waitActivate = false;
}

void AHbkGimmick_SignalLightStand::OnSyncActivate(const int32 NoteCount) {
}


