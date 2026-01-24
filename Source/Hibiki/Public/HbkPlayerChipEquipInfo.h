#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerChipType.h"
#include "HbkPlayerChipEquipInfo.generated.h"

class UHbkInventoryObject_Chip;

USTRUCT(BlueprintType)
struct FHbkPlayerChipEquipInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkPlayerChipType ChipType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ChipLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ChipMaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEquiped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkInventoryObject_Chip> InventoryObjectPtr;
    
    HIBIKI_API FHbkPlayerChipEquipInfo();
};

