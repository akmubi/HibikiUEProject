#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerStatEntry.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkPlayerStatEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AvailableConditions;
    
    FHbkPlayerStatEntry();
};

