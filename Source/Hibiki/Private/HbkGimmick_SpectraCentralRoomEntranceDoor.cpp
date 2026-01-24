#include "HbkGimmick_SpectraCentralRoomEntranceDoor.h"

AHbkGimmick_SpectraCentralRoomEntranceDoor::AHbkGimmick_SpectraCentralRoomEntranceDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->ScreenTransitionTask = NULL;
}

void AHbkGimmick_SpectraCentralRoomEntranceDoor::ScreenTransitionHalfDuration() {
}

void AHbkGimmick_SpectraCentralRoomEntranceDoor::ScreenTransitionFinished() {
}


