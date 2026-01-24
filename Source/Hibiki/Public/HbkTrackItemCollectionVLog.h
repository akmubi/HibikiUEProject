#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkTrackItemCollectionVLog.generated.h"

USTRUCT(BlueprintType)
struct FHbkTrackItemCollectionVLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InventoryId;
    
    HIBIKI_API FHbkTrackItemCollectionVLog();
};

