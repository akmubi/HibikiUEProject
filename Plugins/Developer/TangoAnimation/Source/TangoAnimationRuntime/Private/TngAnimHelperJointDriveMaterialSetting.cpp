#include "TngAnimHelperJointDriveMaterialSetting.h"

FTngAnimHelperJointDriveMaterialSetting::FTngAnimHelperJointDriveMaterialSetting() {
    this->CurveMode = ETngAnimHelperJointCurveExpressionType::None;
    this->SourceComponent = ETngAnimHelperJointSourceComponentType::None;
    this->SourceMin = 0.00f;
    this->SourceMax = 0.00f;
    this->TargetParamMin = 0.00f;
    this->TargetParamMax = 0.00f;
    this->InterpolationMin = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationBindPose = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationMax = ETngAnimHelperJointInterpolationType::None;
    this->bUseYZXRotation = false;
    this->SourceRotationSequence = ETngAnimHelperJointRotationSequence::None;
}

