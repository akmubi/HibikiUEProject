#include "HbkGimmick_bg0120.h"

AHbkGimmick_bg0120::AHbkGimmick_bg0120(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->pPowerOutageSE = NULL;
    this->pPowerOnSE = NULL;
    this->defaultPowerOFF = false;
    this->bSaveState = 0;
}

void AHbkGimmick_bg0120::SetMeter(TEnumAsByte<EHbkGimmick_Bg0120_Meter_t> Type, const bool seFlag) {
}

void AHbkGimmick_bg0120::SetActivateInteract(const bool Flag) {
}


