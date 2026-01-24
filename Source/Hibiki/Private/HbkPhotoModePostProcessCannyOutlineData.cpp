#include "HbkPhotoModePostProcessCannyOutlineData.h"

FHbkPhotoModePostProcessCannyOutlineData::FHbkPhotoModePostProcessCannyOutlineData() {
    this->bUseBlurPass = false;
    this->BlurSigma = 0.00f;
    this->BlurKernelSize = 0;
    this->bUseNonMaximumSuppressionPass = false;
}

