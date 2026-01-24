#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkSubMissionRewardData.generated.h"

USTRUCT(BlueprintType)
struct FHbkSubMissionRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InventoryId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TakeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GearAmount;
    
    HIBIKI_API FHbkSubMissionRewardData();
};

