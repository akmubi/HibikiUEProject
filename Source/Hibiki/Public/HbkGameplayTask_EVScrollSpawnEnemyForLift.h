#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVScrollSpawnEnemyForLift.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class UHbkGameplayTask_EVScrollSpawnEnemyForLift;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVScrollSpawnEnemyForLift : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollSpawnEnemyForLift_OnSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollSpawnEnemyForLift_OnLiftBeforeMove);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollSpawnEnemyForLift_OnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollSpawnEnemyForLift_OnSuccess OnSpawnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollSpawnEnemyForLift_OnLiftBeforeMove OnLiftBeforeForwardMove;
    
    UHbkGameplayTask_EVScrollSpawnEnemyForLift(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SyncNoteWhole(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SyncNoteQuarter(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SyncNoteHalf(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SyncNote8th(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SyncNote16th(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void StartForwardEnemyLift();
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnd();
    
    UFUNCTION(BlueprintCallable)
    void PlayBattleStartEnd();
    
    UFUNCTION(BlueprintCallable)
    void LiftForwardMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void LiftBackMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    bool IsSpawnEnd();
    
    UFUNCTION(BlueprintCallable)
    void FinishedEnemyJumpAction(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void FinishedEm0400EnemyJumpAction(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void FinishedEm0400EnemyAction(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVScrollSpawnEnemyForLift* EventScrollSpawnEnemyForLift(UObject* WorldContextObject, TArray<FName> spawnEnemyGroupArray, TArray<FName> callSignArray, int32 BattleId, int32 startLiftWaitBeatCnt, int32 fixedPosEnemyAttackBeatCnt, bool playBatteStartFlag, bool waitLiftActivate, bool fixedPosEm0200, bool fixedPosEm0400, bool cs0553_Gunner);
    
};

