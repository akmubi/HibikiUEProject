#include "HbkEm5000SpotlightAngleParam.h"

FHbkEm5000SpotlightAngleParam::FHbkEm5000SpotlightAngleParam() {
    this->bIsEnable = false;
    this->CurrentValue = 0.00f;
    this->BeginValue = 0.00f;
    this->EndValue = 0.00f;
    this->CurrentIntensity = 0.00f;
    this->BeginIntensity = 0.00f;
    this->EndIntensity = 0.00f;
    this->EasingFunc = EEasingFunc::Linear;
    this->EaseBlendExp = 0.00f;
    this->EaseStep = 0;
    this->ElapsedTimeMax = 0.00f;
    this->ElapsedTime = 0.00f;
}

