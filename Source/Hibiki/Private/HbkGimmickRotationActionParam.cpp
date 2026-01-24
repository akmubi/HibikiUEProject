#include "HbkGimmickRotationActionParam.h"

FHbkGimmickRotationActionParam::FHbkGimmickRotationActionParam() {
    this->NoteCount = 0;
    this->RotationSE = NULL;
    this->RotationSeDelayTime = 0.00f;
    this->Rotation = FRotator(0.0f);
    this->RotationSeLocation = FVector(0.0f);
}

