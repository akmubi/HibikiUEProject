#include "HbkPlayerRestartTrigger.h"

AHbkPlayerRestartTrigger::AHbkPlayerRestartTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bExecSave = false;
    this->bBeginOverlapDoOnce = false;
    this->RestartEventType = EHbkRestartEventType::Normal;
    this->DamageType = NULL;
    this->bActiveTrigger = false;
}


