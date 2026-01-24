#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyCharacter.h"
#include "HbkEm0100_Saber.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0100_Saber : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
    AHbkEm0100_Saber(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SwitchBladeEnable(bool Enable);
    
};

