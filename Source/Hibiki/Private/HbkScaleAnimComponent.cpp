#include "HbkScaleAnimComponent.h"

UHbkScaleAnimComponent::UHbkScaleAnimComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->scaleKindType = SCALEANIM_KINDTYPE_RHYTHM;
    this->scaleAnimType = ANIMTYPE_NONE;
    this->defaultScale = 1.00f;
    this->timingIndex = 0.00f;
    this->timeMaxScaleValue = 1.00f;
    this->timeSpeedScale = 1.00f;
    this->scaleMultiplyValue = 0.00f;
    this->actorScalingX = false;
    this->actorScalingY = false;
    this->actorScalingZ = false;
}

float UHbkScaleAnimComponent::GetScaleValue() {
    return 0.0f;
}

void UHbkScaleAnimComponent::Button_Event(const int32 Count) {
}

void UHbkScaleAnimComponent::BeatEvent_Timing(const int32 BeatCount) {
}

void UHbkScaleAnimComponent::BeatEvent_Rhythm(const int32 BeatCount) {
}


