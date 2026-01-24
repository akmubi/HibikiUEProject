#pragma once
#include "CoreMinimal.h"
#include "HbkPlayerStats.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> StatValues;
    
    HIBIKI_API FHbkPlayerStats();
};

