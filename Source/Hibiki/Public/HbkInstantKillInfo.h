#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "HbkInstantKillInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkInstantKillInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannelForEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannelForPlayer;
    
    HIBIKI_API FHbkInstantKillInfo();
};

