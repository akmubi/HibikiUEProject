#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ETngAnimHelperJointReferenceType.h"
#include "ETngAnimHelperJointType.h"
#include "TngAnimHelperJointDriveBlendShapeSetting.h"
#include "TngAnimHelperJointDriveConstraintSetting.h"
#include "TngAnimHelperJointDriveMaterialSetting.h"
#include "TngAnimHelperJointExpressionSetting.h"
#include "TngAnimHelperJointSetting.generated.h"

USTRUCT(BlueprintType)
struct TANGOANIMATIONRUNTIME_API FTngAnimHelperJointSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTypeExpression: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngAnimHelperJointType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSourceRef: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngAnimHelperJointReferenceType SourceRefType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceRefJointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceJointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTargetRef: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngAnimHelperJointReferenceType TargetRefType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetRefJointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetJointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetJointOrient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngAnimHelperJointExpressionSetting ExpressionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngAnimHelperJointDriveConstraintSetting DriveConstraintSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngAnimHelperJointDriveBlendShapeSetting DriveBlendShapeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngAnimHelperJointDriveMaterialSetting DriveMaterialSetting;
    
    FTngAnimHelperJointSetting();
};

