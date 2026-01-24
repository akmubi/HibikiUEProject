#pragma once
#include "CoreMinimal.h"
#include "HbkSmearMotionBlurSetting.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkSmearMotionBlurSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName materialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlphaCurveNameLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlphaCurveNameRight;
    
    FHbkSmearMotionBlurSetting();
};

