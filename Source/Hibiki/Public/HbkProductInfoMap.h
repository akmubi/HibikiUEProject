#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkProductInfo.h"
#include "HbkProductInfoMap.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkProductInfoMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkProductInfo> ProductInfoMap;
    
    FHbkProductInfoMap();
};

