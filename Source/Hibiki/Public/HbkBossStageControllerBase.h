#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "DynamicSpawnedBossDelegate.h"
#include "EHbkDifficultyType.h"
#include "EHbkNote.h"
#include "HbkBossControlGimmick.h"
#include "HbkBossControlObject.h"
#include "HbkBossControlObjectByPhase.h"
#include "RestartBossBattleDelegate.h"
#include "HbkBossStageControllerBase.generated.h"

class AHbkBossCharacterBase;
class AHbkPlayerCameraChanger;
class UAkAudioEvent;
class UDamageType;
class UHbkBossAdjustParameterAsset;
class UHbkBossAdjustTakeDamageScaleAsset;

UCLASS(Blueprintable)
class HIBIKI_API AHbkBossStageControllerBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkBossCharacterBase> ControlBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossControlObjectByPhase> ControlObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossControlObject> FreeControlObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkPlayerCameraChanger> CameraChanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsManualCameraChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool IsBossBattlePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ContinueCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBossAdjustParameterAsset* AdjustParamAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBossAdjustParameterAsset* AdjustParamAsset_RT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBossAdjustTakeDamageScaleAsset* AdjustTakeDamageScaleAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultSessionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultStopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RhythmTowerSessionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRegisterAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OnlinePresenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnlinePresenceSetuped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvincibleAlreadySetForPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActiveDelaySlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote WaitNoteTypeFromCP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitNoteCountFromCP;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicSpawnedBoss OnDynamicSpawnedBoss_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRestartBossBattle OnRestartBossBattle_Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHbkDifficultyType GameDifficulty;
    
public:
    AHbkBossStageControllerBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool SpawnBoss();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetGameDifficulty(EHbkDifficultyType Difficulty);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RestoreObjectsByPhase();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ReflectChangePhase();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnStateChange(int32 PhaseIndex);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnStartGameOver();
    
    UFUNCTION(BlueprintCallable)
    void PlayMusicState(UAkAudioEvent* DefaultStateEvent, UAkAudioEvent* RhythmTowerStateEvent, UAkAudioEvent* StreamerStateEvent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRhythmTower();
    
    UFUNCTION(BlueprintCallable)
    bool IsInited();
    
    UFUNCTION(BlueprintCallable)
    void InitBossBattleDieCount();
    
    UFUNCTION(BlueprintCallable)
    EHbkDifficultyType GetGameDifficulty();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBossBattleDieCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkBossCharacterBase* GetBoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustTakeToughDamageScale(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustTakeShieldDamageScale(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustTakeDamageScale(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustTakeBarrierDamageScale(const UDamageType* DamageType) const;
    
    UFUNCTION(BlueprintCallable)
    float GetAdjustHealth(float OriginalHealth, int32 StateIndex, EHbkDifficultyType Difficulty);
    
    UFUNCTION(BlueprintCallable)
    float GetAdjustGiveDamageRate(FGameplayTagContainer& DamageTag, int32 StateIndex, EHbkDifficultyType Difficulty);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecObjectsChange(int32 PhaseIndex, bool IsPreChange);
    
public:
    UFUNCTION(BlueprintCallable)
    void ExecFreeObjectsChange(FName Name);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ExecCameraChange();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBossBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void ActiveObjectChange(FHbkBossControlGimmick& ControlGimmick);
    
};

