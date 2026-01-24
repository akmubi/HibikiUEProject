#include "HbkGimmick_Hologram.h"

AHbkGimmick_Hologram::AHbkGimmick_Hologram(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bActive = false;
}

void AHbkGimmick_Hologram::OnEndHologramPost() {
}


