#include "HbkPhotoModePostProcessPrintFilterData.h"

FHbkPhotoModePostProcessPrintFilterData::FHbkPhotoModePostProcessPrintFilterData() {
    this->FilterType = EHbkPhotoModePrintFilterType::HalftoneScreenSpace;
    this->HalftoneLinesLumThreshold = 0.00f;
    this->bUseHalftone = false;
    this->HalftoneSizeOffset = 0.00f;
    this->bUseLines = false;
    this->LinesSizeOffset = 0.00f;
}

