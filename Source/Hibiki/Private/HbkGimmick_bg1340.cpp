#include "HbkGimmick_bg1340.h"

AHbkGimmick_bg1340::AHbkGimmick_bg1340(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSave = false;
}

float AHbkGimmick_bg1340::GetAnimPlayRate() {
    return 0.0f;
}


