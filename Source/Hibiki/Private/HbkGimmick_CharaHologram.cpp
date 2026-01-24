#include "HbkGimmick_CharaHologram.h"

AHbkGimmick_CharaHologram::AHbkGimmick_CharaHologram(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bActive = false;
}

void AHbkGimmick_CharaHologram::OnEndHologramPost() {
}

void AHbkGimmick_CharaHologram::OnActivateEndHologramPost() {
}


