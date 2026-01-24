#pragma once
#include "CoreMinimal.h"
#include "EHbkPartnerType.h"
#include "HbkCostumeEquipInfoList.h"
#include "HbkCostumeEquipInfoListMap.generated.h"

USTRUCT(BlueprintType)
struct FHbkCostumeEquipInfoListMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, FHbkCostumeEquipInfoList> InfoListMap;
    
    HIBIKI_API FHbkCostumeEquipInfoListMap();
};

