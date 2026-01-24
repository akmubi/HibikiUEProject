#include "HbkPhotoCameraTrigger.h"

AHbkPhotoCameraTrigger::AHbkPhotoCameraTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bExecSave = false;
    this->bBeginOverlapDoOnce = false;
    this->DistanceLimit = 0.00f;
    this->JumpDistanceLimit = 0.00f;
    this->Jump2ndDistanceLimit = 0.00f;
}


