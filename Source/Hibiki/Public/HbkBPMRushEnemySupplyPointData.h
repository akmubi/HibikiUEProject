#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemySupplyPointData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemySupplyPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PointName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TypeName;
    
    HIBIKI_API FHbkBPMRushEnemySupplyPointData();
};

