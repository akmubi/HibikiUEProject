#pragma once
#include "CoreMinimal.h"
#include "HbkCostumeEquipInfo.h"
#include "HbkCostumeEquipInfoList.generated.h"

USTRUCT(BlueprintType)
struct FHbkCostumeEquipInfoList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FHbkCostumeEquipInfo> InfoList;
    
    HIBIKI_API FHbkCostumeEquipInfoList();
};

