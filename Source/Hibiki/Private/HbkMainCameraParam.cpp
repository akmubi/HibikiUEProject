#include "HbkMainCameraParam.h"

FHbkMainCameraParam::FHbkMainCameraParam() {
    this->FOV = 0.00f;
    this->MinFOV = 0.00f;
    this->MaxFOV = 0.00f;
    this->ArmLength = 0.00f;
    this->MinArmLength = 0.00f;
    this->MaxArmLength = 0.00f;
    this->BasePitch = 0.00f;
    this->Pitch = 0.00f;
    this->Roll = 0.00f;
    this->bAllowTransientAppend = false;
    this->FocalPoint = FVector(0.0f);
    this->Location = FVector(0.0f);
}

