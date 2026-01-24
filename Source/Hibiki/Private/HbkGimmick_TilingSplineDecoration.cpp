#include "HbkGimmick_TilingSplineDecoration.h"

FHbkGimmick_TilingSplineDecoration::FHbkGimmick_TilingSplineDecoration() {
    this->Mesh = NULL;
    this->StartPosition = 0.00f;
    this->EachOtherInterval = 0.00f;
    this->RotationAxis = EHbkGimmick_TilingSpline_RotationAxis::XYZ;
    this->Scale = 0.00f;
    this->LocationOffset = FVector(0.0f);
    this->RotationOffset = FRotator(0.0f);
}

