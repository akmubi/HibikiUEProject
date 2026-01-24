#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerChipType.h"
#include "HbkPlayerChipSaveInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerChipSaveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<EHbkPlayerChipType> ChipTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<int32> ChipLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 SlotNum;
    
    HIBIKI_API FHbkPlayerChipSaveInfo();
};

