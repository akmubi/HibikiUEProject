#pragma once
#include "CoreMinimal.h"
#include "HbkInputActionKeyMappingSaveGame.generated.h"

USTRUCT(BlueprintType)
struct FHbkInputActionKeyMappingSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Key;
    
    HIBIKI_API FHbkInputActionKeyMappingSaveGame();
};

