#include "HbkGesEnginePostProcess.h"

FHbkGesEnginePostProcess::FHbkGesEnginePostProcess() {
    this->bOverride_ColorSaturation = false;
    this->bOverride_ColorContrast = false;
    this->bOverride_ColorGamma = false;
    this->bOverride_ColorGain = false;
    this->bOverride_ColorOffset = false;
    this->bOverride_ColorSaturationShadows = false;
    this->bOverride_ColorContrastShadows = false;
    this->bOverride_ColorGammaShadows = false;
    this->bOverride_ColorGainShadows = false;
    this->bOverride_ColorOffsetShadows = false;
    this->bOverride_ColorSaturationMidtones = false;
    this->bOverride_ColorContrastMidtones = false;
    this->bOverride_ColorGammaMidtones = false;
    this->bOverride_ColorGainMidtones = false;
    this->bOverride_ColorOffsetMidtones = false;
    this->bOverride_ColorSaturationHighlights = false;
    this->bOverride_ColorContrastHighlights = false;
    this->bOverride_ColorGammaHighlights = false;
    this->bOverride_ColorGainHighlights = false;
    this->bOverride_ColorOffsetHighlights = false;
    this->bOverride_ColorCorrectionShadowsMax = false;
    this->ColorCorrectionShadowsMax = 0.00f;
    this->bOverride_ColorCorrectionHighlightsMin = false;
    this->ColorCorrectionHighlightsMin = 0.00f;
}

