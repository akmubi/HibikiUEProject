#include "HbkPlayerChargeComponent.h"

UHbkPlayerChargeComponent::UHbkPlayerChargeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChargeLevelEffect = NULL;
    this->ChargeSuccessEffect = NULL;
    this->ChargeLevelSE = NULL;
    this->ChargeSuccessSE = NULL;
    this->ChargeAutoRelease = false;
    this->ChargeCameraBlendIn = 0.04f;
    this->ChargeCameraBlendOut = 0.25f;
    this->ChargeCameraDuration = 0.10f;
    this->ChargeYKeepNoteCountMax = 2;
}

void UHbkPlayerChargeComponent::OnKeepBeatEvent(int32 NoteCount) {
}

int32 UHbkPlayerChargeComponent::GetCurrentChargeLevel() const {
    return 0;
}

void UHbkPlayerChargeComponent::ChargeUp(int32 NoteCount) {
}


