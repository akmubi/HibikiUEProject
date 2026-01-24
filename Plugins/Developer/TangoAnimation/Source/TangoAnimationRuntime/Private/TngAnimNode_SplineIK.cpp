#include "TngAnimNode_SplineIK.h"

FTngAnimNode_SplineIK::FTngAnimNode_SplineIK() {
    this->BoneAxis = ETngSplineBoneAxis::None;
    this->bAutoCalculateSpline = false;
    this->PointCount = 0;
    this->Roll = 0.00f;
    this->TwistStart = 0.00f;
    this->TwistEnd = 0.00f;
    this->BendPriorAxis = ETngSplineBoneAxis::None;
    this->Stretch = 0.00f;
    this->Offset = 0.00f;
}

