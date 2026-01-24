#include "HbkGimmick_bg0784.h"

AHbkGimmick_bg0784::AHbkGimmick_bg0784(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bAnimStarted = false;
    this->CameraShake = NULL;
}

void AHbkGimmick_bg0784::OnEndAnim() {
}


