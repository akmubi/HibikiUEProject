#include "HbkGimmick_bg0130.h"

AHbkGimmick_bg0130::AHbkGimmick_bg0130(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaved = false;
    this->bActive = false;
}

void AHbkGimmick_bg0130::OnSyncBeatEvent(const int32 Count) {
}


