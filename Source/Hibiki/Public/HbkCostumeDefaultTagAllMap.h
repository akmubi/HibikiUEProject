#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "HbkCostumeDefaultTagMap.h"
#include "HbkCostumeDefaultTagAllMap.generated.h"

USTRUCT(BlueprintType)
struct FHbkCostumeDefaultTagAllMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, FHbkCostumeDefaultTagMap> DefaultCostumeAllMap;
    
    HIBIKI_API FHbkCostumeDefaultTagAllMap();
};

