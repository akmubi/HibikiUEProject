#include "HbkAnimNotify_SetCameraRotation.h"

UHbkAnimNotify_SetCameraRotation::UHbkAnimNotify_SetCameraRotation() {
    this->Duration = 0.50f;
    this->BlendInTime = 0.10f;
    this->bInterpYaw = true;
    this->bInterpPitch = true;
    this->bOnlyInCombat = false;
}


