#include "HbkCameraAppendParam.h"

FHbkCameraAppendParam::FHbkCameraAppendParam() {
    this->FOV = 0.00f;
    this->ArmLength = 0.00f;
    this->FocalPointOffset = FVector(0.0f);
    this->OffsetLocation = FVector(0.0f);
    this->OffsetRotation = FRotator(0.0f);
}
