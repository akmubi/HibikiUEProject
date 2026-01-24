#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EHbkInventoryCategory.h"
#include "HbkPlayerInventoryItemList.h"
#include "HbkPlayerInventoryCategoryData.generated.h"

UCLASS(Blueprintable)
class UHbkPlayerInventoryCategoryData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EHbkInventoryCategory, FHbkPlayerInventoryItemList> Map;
    
    UHbkPlayerInventoryCategoryData();

};

