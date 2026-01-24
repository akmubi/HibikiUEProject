#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkCostumePart.h"
#include "EHbkPartnerType.h"
#include "HbkPlayerCostumeInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerCostumeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EHbkCostumePart, FGameplayTag> CurrentCostumeTagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, FGameplayTag> PartnerCostumeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bPlayingThrowWithLowBudgetCostume;
    
    HIBIKI_API FHbkPlayerCostumeInfo();
};

