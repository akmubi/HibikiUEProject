#include "HbkPlayerCameraParamControlTrigger.h"

AHbkPlayerCameraParamControlTrigger::AHbkPlayerCameraParamControlTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bExecSave = false;
    this->bBeginOverlapDoOnce = false;
    this->AppendFOV = 0.00f;
    this->AppendCameraDistance = 0.00f;
}


