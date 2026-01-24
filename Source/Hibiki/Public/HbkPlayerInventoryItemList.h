#pragma once
#include "CoreMinimal.h"
#include "HbkInventoryItem.h"
#include "HbkPlayerInventoryItemList.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerInventoryItemList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FHbkInventoryItem> List;
    
    HIBIKI_API FHbkPlayerInventoryItemList();
};

