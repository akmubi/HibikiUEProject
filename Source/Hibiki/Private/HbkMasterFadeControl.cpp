#include "HbkMasterFadeControl.h"

UHbkMasterFadeControl::UHbkMasterFadeControl() {
    this->MasterFadeWidgetClass = NULL;
    this->TitleToHOFadeWidgetClassIns = NULL;
}

void UHbkMasterFadeControl::StartMasterFade(EHbkTalkFadeFunc InFadeFunc, float InDuration, EHbkTalkFadeColor InColor) {
}

float UHbkMasterFadeControl::GetFadeInDuration() const {
    return 0.0f;
}


