#pragma once
#include "CoreMinimal.h"
#include "EHbkCostumePart.h"
#include "HbkCostumeEquipInfo.generated.h"

class UHbkInventoryObject_Costume;

USTRUCT(BlueprintType)
struct FHbkCostumeEquipInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHbkCostumePart CostumePartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEquiped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasExcludeParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkInventoryObject_Costume> InventoryObjectPtr;
    
    HIBIKI_API FHbkCostumeEquipInfo();
};

