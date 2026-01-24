#include "HbkFinishCameraParam.h"

FHbkFinishCameraParam::FHbkFinishCameraParam() {
    this->Type = EHbkFinishCameraType::None;
    this->FOV = 0.00f;
    this->CameraOffset = FVector(0.0f);
    this->CameraRotation = FRotator(0.0f);
}

