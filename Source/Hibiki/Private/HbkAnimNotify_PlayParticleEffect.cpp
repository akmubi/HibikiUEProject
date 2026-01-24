#include "HbkAnimNotify_PlayParticleEffect.h"

UHbkAnimNotify_PlayParticleEffect::UHbkAnimNotify_PlayParticleEffect() {
    this->PSTemplate = NULL;
    this->Attached = true;
    this->bIsSyncPlayRate = true;
    this->bIsEmitOnGround = false;
    this->CheckLength = 1000.00f;
    this->bEnablePoolingMethod = false;
    this->bLocationOffsetByLocal = false;
}


