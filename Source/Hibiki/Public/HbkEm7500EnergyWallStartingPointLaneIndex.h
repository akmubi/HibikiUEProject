#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500EnergyWallStartingPointLaneIndex.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500EnergyWallStartingPointLaneIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LaneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetentionCount;
    
    HIBIKI_API FHbkEm7500EnergyWallStartingPointLaneIndex();
};

