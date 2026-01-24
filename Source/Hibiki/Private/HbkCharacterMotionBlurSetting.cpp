#include "HbkCharacterMotionBlurSetting.h"

FHbkCharacterMotionBlurSetting::FHbkCharacterMotionBlurSetting() {
    this->bApplyToAllMaterials = false;
    this->BlurFrame = 0;
    this->NormalDotProductBias = 0.00f;
    this->CameraAngleBias = 0.00f;
    this->StretchSpace = EHbkCMBSpace::ComponentSpace;
}

