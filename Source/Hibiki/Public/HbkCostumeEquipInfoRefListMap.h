#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "HbkCostumeEquipInfoRefList.h"
#include "HbkCostumeEquipInfoRefListMap.generated.h"

USTRUCT(BlueprintType)
struct FHbkCostumeEquipInfoRefListMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, FHbkCostumeEquipInfoRefList> InfoListMap;
    
    HIBIKI_API FHbkCostumeEquipInfoRefListMap();
};

