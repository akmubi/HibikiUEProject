#include "HbkEm0300_AIController.h"

AHbkEm0300_AIController::AHbkEm0300_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GatlingPointActor = NULL;
    this->PreGatlingPointActor = NULL;
}

FVector AHbkEm0300_AIController::GetLauncherTargetLocation() {
    return FVector{};
}


