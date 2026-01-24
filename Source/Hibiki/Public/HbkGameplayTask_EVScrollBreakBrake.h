#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkTalkContext.h"
#include "HbkGameplayTask_EVScrollBreakBrake.generated.h"

class UDataTable;
class UHbkGameplayTask_EVScrollBattle;
class UHbkGameplayTask_EVScrollBreakBrake;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVScrollBreakBrake : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollBreakBrake_OnSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollBreakBrake_OnStartBrake);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollBreakBrake_OnEndBrake);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollBreakBrake_OnBreakBrake);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkTaskScrollBreakBrake_OnBrakeHint);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollBreakBrake_OnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollBreakBrake_OnStartBrake OnStartBrake;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollBreakBrake_OnBrakeHint OnBrakeHint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollBreakBrake_OnBreakBrake OnBreakBrake;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskScrollBreakBrake_OnEndBrake OnEndBrake;
    
    UHbkGameplayTask_EVScrollBreakBrake(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void SyncNoteQuarterLamp(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SyncNoteQuarterBrake(int32 noteCnt, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemyEnd_03();
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemyEnd_02();
    
    UFUNCTION(BlueprintCallable)
    void SpawnEnemyEnd_01();
    
    UFUNCTION(BlueprintCallable)
    void PlayBattleStart();
    
    UFUNCTION(BlueprintCallable)
    void OnStartGameOverSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnStartGameOver();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetHintBrakeIndex();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVScrollBreakBrake* EventScrollBreakBrake(UObject* WorldContextObject, UHbkGameplayTask_EVScrollBattle* scrollTask, UDataTable* TalkData, TArray<FName> GameOverOverrideTalkLine);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndBattle();
    
};

