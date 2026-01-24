#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500EnergyWallStartingPointParam.h"
#include "HbkEm7500EnergyWallStartingPointList.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500EnergyWallStartingPointList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500EnergyWallStartingPointParam> ListParam;
    
    HIBIKI_API FHbkEm7500EnergyWallStartingPointList();
};

