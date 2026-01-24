#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameplayTask_EVLaserBattleFillingEnemy.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVLaserBattleFillingEnemy : public UObject {
    GENERATED_BODY()
public:
    UHbkGameplayTask_EVLaserBattleFillingEnemy();

private:
    UFUNCTION(BlueprintCallable)
    void OnSuppiliedEnemy();
    
    UFUNCTION(BlueprintCallable)
    void OnEndJumpAction(AHbkEnemyCharacter* EnemyActor, AHbkEnemyAIController* EnemyAI);
    
};

