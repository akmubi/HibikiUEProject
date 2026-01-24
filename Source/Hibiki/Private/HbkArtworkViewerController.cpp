#include "HbkArtworkViewerController.h"

AHbkArtworkViewerController::AHbkArtworkViewerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InitFOV = 95.00f;
    this->MinFOV = 15.00f;
    this->MaxFOV = 95.00f;
    this->MaxDeltaLR = 420.00f;
    this->MaxDeltaUD = 240.00f;
    this->DelataYX_FOV = NULL;
}


