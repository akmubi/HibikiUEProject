#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEnemyCharacter.h"
#include "HbkBridgeBreakdownEnemyCharacter.generated.h"

UCLASS(Blueprintable)
class AHbkBridgeBreakdownEnemyCharacter : public AHbkEnemyCharacter {
    GENERATED_BODY()
public:
    AHbkBridgeBreakdownEnemyCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PerformDanceAction(const FGameplayTag& ActionTag);
    
};

