#include "TngAnimHelperJointSetting.h"

FTngAnimHelperJointSetting::FTngAnimHelperJointSetting() {
    this->bTypeExpression = false;
    this->Type = ETngAnimHelperJointType::None;
    this->bUseSourceRef = false;
    this->SourceRefType = ETngAnimHelperJointReferenceType::None;
    this->bUseTargetRef = false;
    this->TargetRefType = ETngAnimHelperJointReferenceType::None;
    this->TargetJointOrient = FVector(0.0f);
}

