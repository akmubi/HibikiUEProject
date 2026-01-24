#include "HbkAnimNotify_ApendCameraParam.h"

UHbkAnimNotify_ApendCameraParam::UHbkAnimNotify_ApendCameraParam() {
    this->AppendFOV = 0.00f;
    this->AppendArmLength = 0.00f;
    this->AppendDuration = 0.50f;
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.50f;
    this->AdjustTimeWithBPS = false;
    this->bOnlyInCombat = false;
}


