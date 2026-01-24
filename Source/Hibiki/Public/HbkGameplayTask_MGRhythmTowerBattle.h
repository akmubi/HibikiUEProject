#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "HbkGameplayTask_MGRhythmTowerBattle.generated.h"

class AHbkCharacter;
class AHbkEnemyCharacter;
class UHbkGameplayTask_EnemyDied;
class UHbkGameplayTask_SupplyEnemy;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmTowerBattle : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_SupplyEnemy* SupplyEnemyTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_EnemyDied* EnemyDiedTask;
    
public:
    UHbkGameplayTask_MGRhythmTowerBattle();

protected:
    UFUNCTION(BlueprintCallable)
    void SupplyEnemyEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnWholeEvent_RTBattle(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerParryPerfect();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerBeginJamCombo();
    
    UFUNCTION(BlueprintCallable)
    void OnParryCounter();
    
    UFUNCTION(BlueprintCallable)
    void OnJustDodge();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedForFade();
    
    UFUNCTION(BlueprintCallable)
    void OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnDodgeCounter();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatHitPerfect();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleBegun();
    
    UFUNCTION(BlueprintCallable)
    void EnemyRhythmParryStartEvent();
    
    UFUNCTION(BlueprintCallable)
    void EnemyRhythmParryEndEvent();
    
    UFUNCTION(BlueprintCallable)
    void EnemyResetEventFinished();
    
    UFUNCTION(BlueprintCallable)
    void EnemyDied();
    
    UFUNCTION(BlueprintCallable)
    void EnemyDeadEvent(AHbkEnemyCharacter* EnemyPawn, AHbkCharacter* CauserPawn);
    
    UFUNCTION(BlueprintCallable)
    void EndResult();
    
    UFUNCTION(BlueprintCallable)
    void BeginFinishSlow();
    
};

