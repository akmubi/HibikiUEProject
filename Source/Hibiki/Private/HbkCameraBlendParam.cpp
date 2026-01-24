#include "HbkCameraBlendParam.h"

FHbkCameraBlendParam::FHbkCameraBlendParam() {
    this->BlendTime = 0.00f;
    this->bUseEaseBlend = false;
    this->EasingType = EEasingFunc::Linear;
    this->BlendExp = 0.00f;
}

