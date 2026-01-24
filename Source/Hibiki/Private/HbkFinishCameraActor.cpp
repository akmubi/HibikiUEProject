#include "HbkFinishCameraActor.h"

AHbkFinishCameraActor::AHbkFinishCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FinishCameraTraceChannel = ECC_WorldStatic;
    this->FinishCameraSound = NULL;
}

void AHbkFinishCameraActor::Receive_OnEndedEventBlendCamera() {
}


