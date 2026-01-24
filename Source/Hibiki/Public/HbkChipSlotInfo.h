#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerChipType.h"
#include "HbkChipSlotInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkChipSlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPlayerChipType ChipType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChipLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChipEffectedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChipEffectedAmount2;
    
    HIBIKI_API FHbkChipSlotInfo();
};

