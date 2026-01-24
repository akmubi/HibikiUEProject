#pragma once
#include "CoreMinimal.h"
#include "TngAnimHelperJointExpressionSetting.generated.h"

USTRUCT(BlueprintType)
struct TANGOANIMATIONRUNTIME_API FTngAnimHelperJointExpressionSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleBend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleTwist;
    
    FTngAnimHelperJointExpressionSetting();
};

