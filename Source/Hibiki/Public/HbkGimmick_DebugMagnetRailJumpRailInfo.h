#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_DebugMagnetRailJumpRailInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DebugMagnetRailJumpRailInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessSplineLength;
    
    HIBIKI_API FHbkGimmick_DebugMagnetRailJumpRailInfo();
};

