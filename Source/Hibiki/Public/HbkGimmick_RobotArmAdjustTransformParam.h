#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RobotArmAdjustTransformParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_RobotArmAdjustTransformParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    HIBIKI_API FHbkGimmick_RobotArmAdjustTransformParam();
};

