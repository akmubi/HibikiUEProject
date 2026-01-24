#pragma once
#include "CoreMinimal.h"
#include "HbkGameFlags.h"
#include "HbkGameFlagContainer.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGameFlagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkGameFlags> FlagsByCategory;
    
    FHbkGameFlagContainer();
};

