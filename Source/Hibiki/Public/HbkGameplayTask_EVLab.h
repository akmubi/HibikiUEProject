#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "FHbkGameplayTask_EVLabEventType.h"
#include "HbkTalkContext.h"
#include "HbkGameplayTask_EVLab.generated.h"

class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class UHbkGameplayTask_BattleResult;
class UHbkGameplayTask_BattleStart;
class UHbkGameplayTask_EVLab;
class UHbkGameplayTask_EVLabSettingsDataAsset;
class UHbkGameplayTask_EnemyDied;
class UHbkGameplayTask_SupplyEnemy;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVLab : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGameplayTask_EVLabDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_EVLabDelegate OnEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_BattleStart* BattleStartTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_BattleResult* BattleResultTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_SupplyEnemy* SupplyEnemyTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_EnemyDied* EnemyDiedTask;
    
public:
    UHbkGameplayTask_EVLab(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TutorialSkip();
    
    UFUNCTION(BlueprintCallable)
    void OnTalkEnded(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void OnSuppiliedLaserTrap();
    
    UFUNCTION(BlueprintCallable)
    void OnSuppiliedEnemy();
    
    UFUNCTION(BlueprintCallable)
    void OnPreSuppiliedEnemy();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerParrySuccessPerfect();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerParrySuccessNice();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyDiedSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyAttackParrySuccess(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void OnEndEnemyAttackState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadLaserTrap();
    
    UFUNCTION(BlueprintCallable)
    void OnDamagDoneLaserTrap();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleResultEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnBattleBegun();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIdentifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkGameplayTask_EVLabEventType GetEventType() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVLab* EventLab(UObject* WorldContextObject, UHbkGameplayTask_EVLabSettingsDataAsset* SettingsData);
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void Continue();
    
};

