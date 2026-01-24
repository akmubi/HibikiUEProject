#include "HbkEnginePostProcessVolumeColorGradingDataPatch.h"

FHbkEnginePostProcessVolumeColorGradingDataPatch::FHbkEnginePostProcessVolumeColorGradingDataPatch() {
    this->bUseLumAdjust = false;
    this->bUseColorFilter = false;
    this->ColorFilterType = EHbkPostProcessFiltersColorFilterTypePatch::SepiaTone;
    this->ColorFilterBlendRatio = 0.00f;
    this->ColorGradingIntensity = 0.00f;
    this->CharaColorGradingIntensity = 0.00f;
    this->ColorGradingTranslucentIntensity = 0.00f;
    this->ColorGradingEmissiveIntensity = 0.00f;
    this->bUseColorCorrectNukeStyle = false;
    this->ColorCorrectionShadowsMax = 0.00f;
    this->ColorCorrectionHighlightsMin = 0.00f;
    this->ColorSaturation = FLinearColor(FColor(0));
    this->ColorContrast = FLinearColor(FColor(0));
    this->ColorGamma = FLinearColor(FColor(0));
    this->ColorGain = FLinearColor(FColor(0));
    this->ColorOffset = FLinearColor(FColor(0));
    this->ColorExposure = FLinearColor(FColor(0));
    this->ColorSaturationShadows = FLinearColor(FColor(0));
    this->ColorContrastShadows = FLinearColor(FColor(0));
    this->ColorGammaShadows = FLinearColor(FColor(0));
    this->ColorGainShadows = FLinearColor(FColor(0));
    this->ColorOffsetShadows = FLinearColor(FColor(0));
    this->ColorSaturationMidtones = FLinearColor(FColor(0));
    this->ColorContrastMidtones = FLinearColor(FColor(0));
    this->ColorGammaMidtones = FLinearColor(FColor(0));
    this->ColorGainMidtones = FLinearColor(FColor(0));
    this->ColorOffsetMidtones = FLinearColor(FColor(0));
    this->ColorSaturationHighlights = FLinearColor(FColor(0));
    this->ColorContrastHighlights = FLinearColor(FColor(0));
    this->ColorGammaHighlights = FLinearColor(FColor(0));
    this->ColorGainHighlights = FLinearColor(FColor(0));
    this->ColorOffsetHighlights = FLinearColor(FColor(0));
}

