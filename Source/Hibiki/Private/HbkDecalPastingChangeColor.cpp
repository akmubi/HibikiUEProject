#include "HbkDecalPastingChangeColor.h"

FHbkDecalPastingChangeColor::FHbkDecalPastingChangeColor() {
    this->Alpha = 0.00f;
    this->EasingFunc = EEasingFunc::Linear;
    this->EaseBlendExp = 0.00f;
    this->EaseStep = 0;
    this->Color = FLinearColor();
}

