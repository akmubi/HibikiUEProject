#include "HbkARPostOverrideData.h"

FHbkARPostOverrideData::FHbkARPostOverrideData() {
    this->CurrentPhaseTime = 0.00f;
    this->PowerAccumSpeed = 0.00f;
    this->bUseLensDistortion = false;
    this->LensDistortionPower = 0.00f;
    this->bUseRadialBlur = false;
    this->RadialBlurWidth = 0.00f;
    this->bUseWorldScan = false;
    this->WorldScanSpeed = 0.00f;
    this->MSCRTBlendRatio = 0.00f;
    this->MSOpacityHighlight1 = 0.00f;
    this->MSOpacityHighlight2 = 0.00f;
    this->MSEmulatedResolutionScale = 0.00f;
    this->MSColorGamma = FLinearColor();
    this->MSLineColor = FLinearColor();
    this->MSScanlineColor = FLinearColor();
}

