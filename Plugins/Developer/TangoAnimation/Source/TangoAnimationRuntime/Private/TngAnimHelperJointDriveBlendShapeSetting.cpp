#include "TngAnimHelperJointDriveBlendShapeSetting.h"

FTngAnimHelperJointDriveBlendShapeSetting::FTngAnimHelperJointDriveBlendShapeSetting() {
    this->CurveMode = ETngAnimHelperJointCurveExpressionType::None;
    this->SourceComponent = ETngAnimHelperJointSourceComponentType::None;
    this->SourceMin = 0.00f;
    this->SourceMax = 0.00f;
    this->TargetWeightMin = 0.00f;
    this->TargetWeightMax = 0.00f;
    this->InterpolationMin = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationBindPose = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationMax = ETngAnimHelperJointInterpolationType::None;
    this->bUseYZXRotation = false;
    this->SourceRotationSequence = ETngAnimHelperJointRotationSequence::None;
}

