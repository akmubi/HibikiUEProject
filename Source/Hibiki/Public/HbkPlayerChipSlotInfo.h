#pragma once
#include "CoreMinimal.h"
#include "HbkChipSlotInfo.h"
#include "HbkPlayerChipSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerChipSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkChipSlotInfo> EquipChips;
    
    HIBIKI_API FHbkPlayerChipSlotInfo();
};

