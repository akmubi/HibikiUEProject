#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkCostumeKit.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkCostumeKit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CostumeTags;
    
    FHbkCostumeKit();
};

