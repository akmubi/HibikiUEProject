#include "TngAnimHelperJointDriveConstraintSetting.h"

FTngAnimHelperJointDriveConstraintSetting::FTngAnimHelperJointDriveConstraintSetting() {
    this->CurveMode = ETngAnimHelperJointCurveExpressionType::None;
    this->SourceComponent = ETngAnimHelperJointSourceComponentType::None;
    this->SourceMin = 0.00f;
    this->SourceMax = 0.00f;
    this->bTargetTranslationX = false;
    this->TargetTranslationX_Min = 0.00f;
    this->TargetTranslationX_Max = 0.00f;
    this->InterpolationTranslationX_Min = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationTranslationX_BindPose = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationTranslationX_Max = ETngAnimHelperJointInterpolationType::None;
    this->bTargetTranslationY = false;
    this->TargetTranslationY_Min = 0.00f;
    this->TargetTranslationY_Max = 0.00f;
    this->InterpolationTranslationY_Min = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationTranslationY_BindPose = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationTranslationY_Max = ETngAnimHelperJointInterpolationType::None;
    this->bTargetTranslationZ = false;
    this->TargetTranslationZ_Min = 0.00f;
    this->TargetTranslationZ_Max = 0.00f;
    this->InterpolationTranslationZ_Min = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationTranslationZ_BindPose = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationTranslationZ_Max = ETngAnimHelperJointInterpolationType::None;
    this->bTargetRotationX = false;
    this->TargetRotationX_Min = 0.00f;
    this->TargetRotationX_Max = 0.00f;
    this->InterpolationRotationX_Min = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationRotationX_BindPose = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationRotationX_Max = ETngAnimHelperJointInterpolationType::None;
    this->bTargetRotationY = false;
    this->TargetRotationY_Min = 0.00f;
    this->TargetRotationY_Max = 0.00f;
    this->InterpolationRotationY_Min = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationRotationY_BindPose = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationRotationY_Max = ETngAnimHelperJointInterpolationType::None;
    this->bTargetRotationZ = false;
    this->TargetRotationZ_Min = 0.00f;
    this->TargetRotationZ_Max = 0.00f;
    this->InterpolationRotationZ_Min = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationRotationZ_BindPose = ETngAnimHelperJointInterpolationType::None;
    this->InterpolationRotationZ_Max = ETngAnimHelperJointInterpolationType::None;
    this->bUseYZXRotation = false;
    this->SourceRotationSequence = ETngAnimHelperJointRotationSequence::None;
}

