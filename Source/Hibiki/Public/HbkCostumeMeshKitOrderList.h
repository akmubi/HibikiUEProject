#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeMeshKitOrder.h"
#include "HbkCostumeMeshKitOrderList.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkCostumeMeshKitOrderList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkCostumeMeshKitOrder> MeshKitOrders;
    
    FHbkCostumeMeshKitOrderList();
};

