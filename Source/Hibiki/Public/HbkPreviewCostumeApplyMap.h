#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "HbkPreviewCostumeApplyMap.generated.h"

USTRUCT(BlueprintType)
struct FHbkPreviewCostumeApplyMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkCostumePart, FGameplayTag> ApplyCostumeMap;
    
    HIBIKI_API FHbkPreviewCostumeApplyMap();
};

