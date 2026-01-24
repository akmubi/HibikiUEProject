#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkCoinBlockerCollisionInfo.h"
#include "HbkCoinBlockerCollisionInstance.generated.h"

class UShapeComponent;

USTRUCT(BlueprintType)
struct FHbkCoinBlockerCollisionInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCoinBlockerCollisionInfo CollisionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MovingOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComponent;
    
    HIBIKI_API FHbkCoinBlockerCollisionInstance();
};

