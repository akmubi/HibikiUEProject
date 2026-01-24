#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MagnetRailCamera_CameraMoveInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailCamera_CameraMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* MoveActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float moveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveTime;
    
    HIBIKI_API FHbkGimmick_MagnetRailCamera_CameraMoveInfo();
};

