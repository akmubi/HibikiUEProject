#include "HbkSSAOTableRow.h"

FHbkSSAOTableRow::FHbkSSAOTableRow() {
    this->SSAOThreshold = 0.00f;
    this->SSAOLinesFrequency = 0.00f;
    this->SSAOLinesDarkness = 0.00f;
    this->SSAOFadeStart = 0.00f;
    this->SSAOFadeDistance = 0.00f;
    this->SSAOAngleFadeStart = 0.00f;
    this->SSAOAngleFadeStartDistance = 0.00f;
    this->SSAOTint = FLinearColor(FColor(0));
}

