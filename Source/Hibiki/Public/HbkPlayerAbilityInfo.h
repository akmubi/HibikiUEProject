#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkPlayerAbilityInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerAbilityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InventoryTag;
    
    HIBIKI_API FHbkPlayerAbilityInfo();
};

