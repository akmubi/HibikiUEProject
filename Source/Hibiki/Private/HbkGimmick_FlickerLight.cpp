#include "HbkGimmick_FlickerLight.h"

AHbkGimmick_FlickerLight::AHbkGimmick_FlickerLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->Opacity = false;
    this->Emissive = false;
    this->GlobalIntervalTime = 0.00f;
    this->GlobalRandomTime = 0.00f;
    this->FlickerTime = 0.00f;
    this->FlickerIntervalTime = 0.00f;
    this->FlickerRandomTime = 0.00f;
    this->FlickerFrequency = 0.00f;
    this->FlickerSpeed = 0.00f;
    this->FlickerRandomSpeed = 0.00f;
}


