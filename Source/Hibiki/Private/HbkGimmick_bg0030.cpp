#include "HbkGimmick_bg0030.h"

AHbkGimmick_bg0030::AHbkGimmick_bg0030(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->downBeatCount = 0;
    this->upBeatCount = 0;
    this->loopMaxBeatCount = 0;
    this->maxIntensity = 1.00f;
    this->minIntensity = 0.00f;
}

void AHbkGimmick_bg0030::HalfNoteEvent(const int32 BeatCount) {
}

void AHbkGimmick_bg0030::BeatEvent(const int32 BeatCount) {
}


