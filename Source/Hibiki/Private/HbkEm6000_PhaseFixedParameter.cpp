#include "HbkEm6000_PhaseFixedParameter.h"

FHbkEm6000_PhaseFixedParameter::FHbkEm6000_PhaseFixedParameter() {
    this->PlaceIndex = 0;
    this->bIsWolf = false;
    this->bUseGuardComponent = false;
    this->bUseStageHatchComponent = false;
    this->bIsCoinStage = false;
    this->bNotBossStateCancel = false;
    this->bNotBossStateCancel_RT = false;
    this->ChangeCameraParamBlendTime = 0.00f;
}

