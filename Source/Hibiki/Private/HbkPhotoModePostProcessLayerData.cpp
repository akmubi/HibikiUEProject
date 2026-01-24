#include "HbkPhotoModePostProcessLayerData.h"

FHbkPhotoModePostProcessLayerData::FHbkPhotoModePostProcessLayerData() {
    this->PreviewType = EHbkPhotoModePostProcessLayerType::Default;
    this->LineArtFilterBlendRatio = 0.00f;
    this->ActiveLineArtFilterType = EHbkPhotoModeLineArtFilterType::Default;
    this->ActiveColorFilterType = EHbkPhotoModeColorFilterType::SepiaTone;
    this->ColorFilterBlendRatio = 0.00f;
    this->Exposure = 0.00f;
    this->Gamma = 0.00f;
    this->PixelateFilterBlendRatio = 0.00f;
    this->ScanlineFilterBlendRatio = 0.00f;
}

