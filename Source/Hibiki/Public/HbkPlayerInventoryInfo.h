#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerInventoryInfo.generated.h"

class UHbkPlayerInventoryCategoryData;

USTRUCT(BlueprintType)
struct FHbkPlayerInventoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPlayerInventoryCategoryData* InventoryCategoryData_LatestSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPlayerInventoryCategoryData* InventoryCategoryData;
    
    HIBIKI_API FHbkPlayerInventoryInfo();
};

