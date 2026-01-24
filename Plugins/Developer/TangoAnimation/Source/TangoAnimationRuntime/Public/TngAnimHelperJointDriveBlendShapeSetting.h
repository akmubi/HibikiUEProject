#pragma once
#include "CoreMinimal.h"
#include "ETngAnimHelperJointCurveExpressionType.h"
#include "ETngAnimHelperJointInterpolationType.h"
#include "ETngAnimHelperJointRotationSequence.h"
#include "ETngAnimHelperJointSourceComponentType.h"
#include "TngAnimRichCurve.h"
#include "TngAnimHelperJointDriveBlendShapeSetting.generated.h"

USTRUCT(BlueprintType)
struct FTngAnimHelperJointDriveBlendShapeSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngAnimHelperJointCurveExpressionType CurveMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngAnimHelperJointSourceComponentType SourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBlendShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBlendShapeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWeightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetWeightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngAnimHelperJointInterpolationType InterpolationMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngAnimHelperJointInterpolationType InterpolationBindPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngAnimHelperJointInterpolationType InterpolationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngAnimRichCurve TargetWeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseYZXRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngAnimHelperJointRotationSequence SourceRotationSequence;
    
    TANGOANIMATIONRUNTIME_API FTngAnimHelperJointDriveBlendShapeSetting();
};

