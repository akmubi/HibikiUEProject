#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkSpectraRoomClearedRewardData.generated.h"

USTRUCT(BlueprintType)
struct FHbkSpectraRoomClearedRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InventoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TakeCount;
    
    HIBIKI_API FHbkSpectraRoomClearedRewardData();
};

