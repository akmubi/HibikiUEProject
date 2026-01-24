#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemySupplyPointData.h"
#include "HbkBPMRushEnemySupplyTypeData.h"
#include "HbkBPMRushEnemySupplyData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemySupplyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushEnemySupplyTypeData> SupplyTypeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushEnemySupplyPointData> FirstSupplyPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushEnemySupplyPointData> NextSupplyPointData;
    
    HIBIKI_API FHbkBPMRushEnemySupplyData();
};

