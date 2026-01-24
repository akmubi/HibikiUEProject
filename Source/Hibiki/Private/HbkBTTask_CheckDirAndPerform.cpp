#include "HbkBTTask_CheckDirAndPerform.h"

UHbkBTTask_CheckDirAndPerform::UHbkBTTask_CheckDirAndPerform() {
    this->bForceDecideTag_OnSuccess = false;
    this->bDecideTag_Far_OnFailed = false;
    this->bDrawTraceDebug = false;
    this->DrawTraceDebugDuration = 5.00f;
}

bool UHbkBTTask_CheckDirAndPerform::CheckAndGetTag(AAIController* OwnerController, APawn* ControlledPawn, FGameplayTag& Tag) {
    return false;
}


