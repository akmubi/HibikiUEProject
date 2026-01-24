#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushEnemySupplyConditionOrder.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemySupplyConditionOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OrderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    HIBIKI_API FHbkBPMRushEnemySupplyConditionOrder();
};

