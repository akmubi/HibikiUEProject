#include "HbkLaserBehaviorParam.h"

FHbkLaserBehaviorParam::FHbkLaserBehaviorParam() {
    this->Behavior = EHbkSBFLaserIndividualBehavior::None;
    this->Value = 0;
    this->EmitterSceneComponent = NULL;
    this->HitEmitterSceneComponent = NULL;
    this->ContinueHitEffectTime = 0.00f;
    this->BeginRotate = FRotator(0.0f);
    this->EndRotate = FRotator(0.0f);
}

