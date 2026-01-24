#include "HbkPhotoModePostProcessGlobalLayerData.h"

FHbkPhotoModePostProcessGlobalLayerData::FHbkPhotoModePostProcessGlobalLayerData() {
    this->PreviewType = EHbkPhotoModePostProcessGlobalLayerType::Default;
    this->bUseOverlayFilter = false;
    this->ActiveOverlayFilterType = EHbkPhotoModeOverlayFilterType::PaperTexture;
    this->OverlayFilterBlendRatio = 0.00f;
    this->ActiveColorGradingFilterType = EHbkPhotoModeColorGradingFilterType::Default;
    this->bUsePrintFilter = false;
    this->ActivePrintFilterType = EHbkPhotoModePrintFilterType::HalftoneScreenSpace;
    this->PrintFilterBlendRatio = 0.00f;
}

