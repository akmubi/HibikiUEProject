#include "HbkGimmick_TutorialLight.h"

AHbkGimmick_TutorialLight::AHbkGimmick_TutorialLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->FadeStartTime = 0.00f;
    this->ExecTime = 0.00f;
    this->FadeEndTime = 0.00f;
}


