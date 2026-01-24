#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkBattleTriggerActorActivate.h"
#include "HbkBattleTriggerAlert.h"
#include "HbkBattleTriggerBattlTransitioneRule.h"
#include "HbkBattleTriggerBattleBeginParam.h"
#include "HbkBattleTriggerBlockingVolume.h"
#include "HbkBattleTriggerCamera.h"
#include "HbkBattleTriggerCollisionMesh.h"
#include "HbkBattleTriggerEnemyResetEvent.h"
#include "HbkBattleTriggerEnemySupplyParam.h"
#include "HbkBattleTriggerRhythmParryArea.h"
#include "HbkBattleTriggerSound.h"
#include "HbkBattleTriggerSpectrum.h"
#include "HbkTriggerBox.h"
#include "HbkBattleTrigger.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UHbkEnemyResetEventTask;
class UHbkGameplayTask_ActivateCamera;
class UHbkGameplayTask_BattleResult;
class UHbkGameplayTask_BattleStart;
class UHbkGameplayTask_DeactivateCamera;
class UHbkGameplayTask_EnemyDied;
class UHbkGameplayTask_FlickGameEnvState;
class UHbkGameplayTask_SupplyEnemy;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AHbkBattleTrigger : public AHbkTriggerBox {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkSupplyEnemeyDelegate, const FName&, BattleGroupName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkReadyToFightBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkPrepareBattleDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkEndFlickGameEnvDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkBeginFlickGameEnvDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkBattleStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkBattleResultStartDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkBattleEndDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkBattleBegunDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleStartDelegate OnBattleStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleEndDelegate OnBattleEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkPrepareBattleDelegate OnPrepareBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkReadyToFightBattleDelegate OnReadyToFightBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleBegunDelegate OnBattleBegun;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleResultStartDelegate OnBattleResultStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeginFlickGameEnvDelegate OnBeginFlickGameEnv;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEndFlickGameEnvDelegate OnEndFlickGameEnv;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSupplyEnemeyDelegate OnSupplyEnemey;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerActorActivate ActorActivateStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerActorActivate ActorActivateEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerBattleBeginParam BattleBeginParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerBattlTransitioneRule BattlTransitioneRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerEnemySupplyParam EnemySupplyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBattleTriggerEnemyResetEvent> EnemyResetEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerSound Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerCamera Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBattleTriggerAlert> Alerts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerSpectrum Spectrum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerBlockingVolume BlockingVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerRhythmParryArea RhythmParryArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBattleTriggerCollisionMesh CollisionMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSupplyEnemyAdvance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bBattleEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_BattleStart* BattleStartTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_SupplyEnemy* SupplyEnemyTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_EnemyDied* EnemyDiedTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_BattleResult* BattleResultTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_ActivateCamera* ActivateCameraTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_DeactivateCamera* DeactivateCameraTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_FlickGameEnvState* FlickGameEnvStateTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkEnemyResetEventTask* EnemyResetEventTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BattleGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyBattleIdAndGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote EnemySpawnSyncNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnemySpawnSyncCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopyEnemySupplyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BattleStartBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BattleEndBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCopySound;
    
public:
    AHbkBattleTrigger(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SupplyEnemyComplete();
    
    UFUNCTION(BlueprintCallable)
    void ReadyToFightBattle();
    
    UFUNCTION(BlueprintCallable)
    void PrepareBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnCollisionComponentCollisionSettingsChanged(UPrimitiveComponent* ChangedComponent);
    
    UFUNCTION(BlueprintCallable)
    void GameEnvStateEnd();
    
    UFUNCTION(BlueprintCallable)
    void EnemySupplyCameraDeactivateFinished();
    
    UFUNCTION(BlueprintCallable)
    void EnemySupplyCameraActivateFinished();
    
    UFUNCTION(BlueprintCallable)
    void EnemyResetEventFinished();
    
    UFUNCTION(BlueprintCallable)
    void EnemyDiedSuccess();
    
    UFUNCTION(BlueprintCallable)
    void BattleResultEnded();
    
    UFUNCTION(BlueprintCallable)
    void BattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void BattleBegun();
    
};

