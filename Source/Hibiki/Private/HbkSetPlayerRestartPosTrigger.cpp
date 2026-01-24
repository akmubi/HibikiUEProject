#include "HbkSetPlayerRestartPosTrigger.h"

AHbkSetPlayerRestartPosTrigger::AHbkSetPlayerRestartPosTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bExecSave = false;
    this->bBeginOverlapDoOnce = false;
    this->bActivePoint = false;
}


