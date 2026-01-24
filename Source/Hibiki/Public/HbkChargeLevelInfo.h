#pragma once
#include "CoreMinimal.h"
#include "HbkChargeLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkChargeLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelUpNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GatherUpNoteCount;
    
    HIBIKI_API FHbkChargeLevelInfo();
};

