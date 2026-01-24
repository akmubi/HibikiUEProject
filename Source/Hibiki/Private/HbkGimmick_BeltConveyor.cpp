#include "HbkGimmick_BeltConveyor.h"

AHbkGimmick_BeltConveyor::AHbkGimmick_BeltConveyor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->Speed = 0.00f;
}

void AHbkGimmick_BeltConveyor::BeatEvent(const int32 BeatCount) {
}


