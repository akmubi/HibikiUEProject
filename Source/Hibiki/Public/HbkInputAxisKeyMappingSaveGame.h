#pragma once
#include "CoreMinimal.h"
#include "HbkInputAxisKeyMappingSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FHbkInputAxisKeyMappingSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Key;
    
    HIBIKI_API FHbkInputAxisKeyMappingSaveGame();
};

