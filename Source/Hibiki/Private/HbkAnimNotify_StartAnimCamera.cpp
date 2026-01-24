#include "HbkAnimNotify_StartAnimCamera.h"

UHbkAnimNotify_StartAnimCamera::UHbkAnimNotify_StartAnimCamera() {
    this->BlendInTime = 0.00f;
    this->bIsBlendInSyncBPM = false;
    this->bCollisionTest = false;
    this->bTraceComplex = true;
    this->bIsAutoStop = false;
    this->BlendOutTime = 0.50f;
    this->bIsBlendOutSyncBPM = false;
    this->DisableDitherPartType = EHbkPartnerType::None;
    this->bDisablePlayerDither = false;
    this->bIsOffsetCollisionStart = false;
}


