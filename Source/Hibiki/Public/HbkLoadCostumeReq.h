#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkCostumeDataRow.h"
#include "HbkLoadCostumeReq.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkLoadCostumeReq {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CostumeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCostumeDataRow CostumeDataInfo;
    
    FHbkLoadCostumeReq();
};

