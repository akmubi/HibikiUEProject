#include "HbkGesPpmMotionBlur.h"

FHbkGesPpmMotionBlur::FHbkGesPpmMotionBlur() {
    this->bOverrideMotionBlur = false;
    this->bMotionBlur = false;
    this->bOverrideMotionBlurAmount = false;
    this->MotionBlurAmount = 0.00f;
    this->bOverrideMotionBlurMaxUVLength = false;
    this->MotionBlurMaxUVLength = 0.00f;
    this->bOverrideMotionBlurDepthInvMult = false;
    this->DepthInvMult = 0.00f;
    this->bOverrideMotionBlurDepthInvExp = false;
    this->DepthInvExp = 0.00f;
    this->bOverrideMotionBlurNumSample = false;
    this->NumSample = 0;
}

