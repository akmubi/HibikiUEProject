#pragma once
#include "CoreMinimal.h"
#include "EHbkCostumePart.h"
#include "HbkCostumeMeshKitOrder.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkCostumeMeshKitOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkCostumePart PartCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshKitName;
    
    FHbkCostumeMeshKitOrder();
};

