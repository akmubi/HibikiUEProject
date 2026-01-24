#include "HbkGimmick_ZanzoHologram.h"

AHbkGimmick_ZanzoHologram::AHbkGimmick_ZanzoHologram(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
}

EHbkGimmick_ZanzoHologramAnimState AHbkGimmick_ZanzoHologram::GetAnimState() const {
    return EHbkGimmick_ZanzoHologramAnimState::None;
}


