#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "HbkCostumeDefaultTagMap.generated.h"

USTRUCT(BlueprintType)
struct FHbkCostumeDefaultTagMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkCostumePart, FGameplayTag> DefaultCostumeMap;
    
    HIBIKI_API FHbkCostumeDefaultTagMap();
};

