#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkGameplayTask_MGRhythmDungeonBattle.generated.h"

class AHbkCharacter;
class AHbkEnemyCharacter;
class UHbkGameplayTask_SupplyEnemySomeGroup;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmDungeonBattle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_SupplyEnemySomeGroup* SupplyEnemyTask;
    
public:
    UHbkGameplayTask_MGRhythmDungeonBattle();

protected:
    UFUNCTION(BlueprintCallable)
    void SupplyEnemyEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnReadyToFight();
    
    UFUNCTION(BlueprintCallable)
    void OnPrepareBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleBegun();
    
    UFUNCTION(BlueprintCallable)
    void EnemyDeadEvent(AHbkEnemyCharacter* EnemyPawn, AHbkCharacter* CauserPawn);
    
    UFUNCTION(BlueprintCallable)
    void EndResult();
    
    UFUNCTION(BlueprintCallable)
    void EndedFinishSlow();
    
    UFUNCTION(BlueprintCallable)
    void BeginFinishSlow();
    
};

