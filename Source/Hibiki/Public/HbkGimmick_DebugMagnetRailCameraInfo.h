#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_DebugMagnetRailCameraInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_DebugMagnetRailCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveActorLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveSpeed;
    
    HIBIKI_API FHbkGimmick_DebugMagnetRailCameraInfo();
};

