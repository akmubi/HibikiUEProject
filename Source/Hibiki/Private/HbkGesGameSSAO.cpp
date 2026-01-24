#include "HbkGesGameSSAO.h"

FHbkGesGameSSAO::FHbkGesGameSSAO() {
    this->bOverrideSSAOTint = false;
    this->bOverrideSSAOThreshold = false;
    this->SSAOThreshold = 0.00f;
    this->bOverrideSSAOLinesFrequency = false;
    this->SSAOLinesFrequency = 0.00f;
    this->bOverrideSSAOLinesDarkness = false;
    this->SSAOLinesDarkness = 0.00f;
    this->bOverrideSSAOFadeStart = false;
    this->SSAOFadeStart = 0.00f;
    this->bOverrideSSAOFadeDistance = false;
    this->SSAOFadeDistance = 0.00f;
    this->bOverrideSSAOAngleFadeStart = false;
    this->SSAOAngleFadeStart = 0.00f;
    this->bOverrideSSAOAngleFadeStartDistance = false;
    this->SSAOAngleFadeStartDistance = 0.00f;
    this->SSAOTint = FLinearColor(FColor(0));
}

