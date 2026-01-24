#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500ThunderOriginSequentialParam.h"
#include "HbkEm7500ThunderOriginCircleParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500ThunderOriginCircleParam : public FHbkEm7500ThunderOriginSequentialParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSpawnClockwise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnAroundCount;
    
    HIBIKI_API FHbkEm7500ThunderOriginCircleParam();
};

