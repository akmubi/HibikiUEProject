#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkInventoryItem.generated.h"

class UHbkInventoryObject;

USTRUCT(BlueprintType)
struct FHbkInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTag InventoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkInventoryObject> InventoryObjectPtr;
    
    HIBIKI_API FHbkInventoryItem();
};

