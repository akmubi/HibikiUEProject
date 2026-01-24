#include "HbkARPostData.h"

FHbkARPostData::FHbkARPostData() {
    this->PowerAccumSpeed = 0.00f;
    this->bUseLensDistortion = false;
    this->LensDistortionPower = 0.00f;
    this->bUseRadialBlur = false;
    this->RadialBlurBlurWidth = 0.00f;
    this->bUseWorldScan = false;
    this->WorldScanSpeed = 0.00f;
    this->MSCRTBlendRatio = 0.00f;
    this->MSSpeed1 = 0.00f;
    this->MSSpeed2 = 0.00f;
    this->MSWidth1 = 0.00f;
    this->MSWidth2 = 0.00f;
    this->MSOpacityHighlight1 = 0.00f;
    this->MSOpacityHighlight2 = 0.00f;
    this->MSFrequency = 0.00f;
    this->bMSUseScanlineColor = false;
    this->MSEmulatedResolutionScale = 0.00f;
    this->MSScanlineHardness = 0.00f;
    this->MSScanlinePixelHardness = 0.00f;
    this->MSWarpOriginalImage = 0.00f;
    this->MSWarpStrengthU = 0.00f;
    this->MSWarpStrengthV = 0.00f;
    this->MSShadowMaskDark = 0.00f;
    this->MSShadowMaskLight = 0.00f;
    this->MSLineColor = FLinearColor();
    this->MSColorGamma = FLinearColor();
    this->MSScanlineColor = FLinearColor();
}

