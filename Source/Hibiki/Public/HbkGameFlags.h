#pragma once
#include "CoreMinimal.h"
#include "HbkGameFlags.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGameFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> Values;
    
    FHbkGameFlags();
};

