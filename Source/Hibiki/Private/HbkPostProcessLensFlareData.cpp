#include "HbkPostProcessLensFlareData.h"

FHbkPostProcessLensFlareData::FHbkPostProcessLensFlareData() {
    this->BlendMode = EHbkLensFlareGhostBlendMode::Add;
    this->LensFlareAlpha = 0.00f;
    this->LensFlareIntensity = 0.00f;
    this->LensFlareScale = 0.00f;
    this->ScreenCenterOffsetU = 0.00f;
    this->ScreenCenterOffsetV = 0.00f;
}

