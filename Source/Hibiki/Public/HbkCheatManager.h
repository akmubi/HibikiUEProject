#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CheatManager.h"
#include "HbkCheatManager.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API UHbkCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UHbkCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void TeleportPlayer(const FVector Location, const FRotator Rotation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerSuicide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayerDying();
    
};

