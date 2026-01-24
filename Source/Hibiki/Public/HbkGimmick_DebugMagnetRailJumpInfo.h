#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_DebugMagnetRailJumpInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DebugMagnetRailJumpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SplineMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessSplineLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessSplineMoveSpeed;
    
    HIBIKI_API FHbkGimmick_DebugMagnetRailJumpInfo();
};

