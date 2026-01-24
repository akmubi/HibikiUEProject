#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BattleComboCountUpDelegateDelegate.h"
#include "BattleEndRecordWithDetailDelegateDelegate.h"
#include "BattleNoticeDelegateDelegate.h"
#include "BattleResultConfirmedDelegateDelegate.h"
#include "BattleRhythmMeterChangedDelegateDelegate.h"
#include "BattleRhythmMeterRankChangedDelegateDelegate.h"
#include "BattleScorePointChangedDelegateDelegate.h"
#include "BattleScoreRateChangedDelegateDelegate.h"
#include "BattleScoreScaleEndDelegateDelegate.h"
#include "BattleScoreScaleStartDelegateDelegate.h"
#include "EHbkBattleResultType.h"
#include "EHbkRhythmMeterActionType.h"
#include "EHbkScoreActionType.h"
#include "HbkBeforeStartBattleParam.h"
#include "StageResultDelegateDelegate.h"
#include "TngGameSystem.h"
#include "HbkBattleManager.generated.h"

class AActor;
class AHbkCharacter;
class AHbkEnemyCharacter;
class UAkAudioEvent;
class UHbkBattleManagerAsset;
class UObject;
class UParticleSystem;

UCLASS(Blueprintable)
class HIBIKI_API UHbkBattleManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleRhythmMeterChangedDelegate OnRhythmMeterChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleScorePointChangedDelegate OnScorePointChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnRestoreScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleScoreScaleStartDelegate OnScoreScaleStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleScoreScaleEndDelegate OnScoreScaleEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleComboCountUpDelegate OnComboCountUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnComboCountClear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleRhythmMeterRankChangedDelegate OnChangeRhythmMeterRank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleRhythmMeterRankChangedDelegate OnInitRhythmMeterRank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleScoreRateChangedDelegate OnChangeScoreRate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnCalledBeginBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnPrepareBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnDuringPrepare;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnAfterPrepare;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnReadyToFight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnBeginBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnEndBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnBeginBattleResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnBeginFinishCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnEndedFinishCamera;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnBeginRecord;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleEndRecordWithDetailDelegate OnEndedRecord;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnEndedRecordNoInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleResultConfirmedDelegate OnBattleResultConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStageResultDelegate OnStageResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnEndedStageResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnFightUI;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnBeginCombat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnEndCombat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnBeginFinishSlow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleNoticeDelegate OnEndedFinishSlow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBattleManagerAsset* BattleManagerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BattleStartPlayerEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BattleStartEnemyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BattleStartEnemyEffect_Small;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BattleStartPlayerSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SyncRateParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudienceLoopStartSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudienceLoopEndSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudienceOnBeatSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AudienceOffBeatSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBeforeStartBattleParam BeforeStartBattleParam;
    
public:
    UHbkBattleManager();

    UFUNCTION(BlueprintCallable)
    void ShowStageResult(bool bNextSelectPopup);
    
    UFUNCTION(BlueprintCallable)
    void ShowBattleResult(FVector2D Offset);
    
    UFUNCTION(BlueprintCallable)
    void SetSuspendScoreRecord(bool Suspend, bool bSyncUI);
    
    UFUNCTION(BlueprintCallable)
    void SetSuspendAutoDecrease(bool Suspend);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLastHit(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleResultType(EHbkBattleResultType NewType);
    
    UFUNCTION(BlueprintCallable)
    void ResetRhythmMeterRank();
    
    UFUNCTION(BlueprintCallable)
    void ResetEnemyGroupNames(const TArray<FName>& GroupNames);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnStepForwardGameSequence();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnStartGameOver();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnRecoverDying();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnPlayerDying();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndedFinishCamera();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnDeadEnemy(AHbkEnemyCharacter* DeadEnemyPawn, AHbkCharacter* CauserPawn);
    
    UFUNCTION(BlueprintCallable)
    void Receive_EndStageResult();
    
    UFUNCTION(BlueprintCallable)
    void Receive_EndDisplayResult();
    
    UFUNCTION(BlueprintCallable)
    void Receive_BeatEvent(int32 NoteCount, bool OnBeat);
    
    UFUNCTION(BlueprintCallable)
    void Receive_BarEvent(int32 NoteCount, bool OnBeat);
    
    UFUNCTION(BlueprintCallable)
    void Receive_AudienceBeatEvent(int32 NoteCount, bool OnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnNextBeatForRhythmMeter(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFinishBlowHit(AActor* Attacker, AActor* Victim);
    
    UFUNCTION(BlueprintCallable)
    void NotifyQuickBeginBattle(int32 BattleId, bool NotRecordScore);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEndBattle(bool bSkipResult);
    
    UFUNCTION(BlueprintCallable)
    void NotifyBeginBattle(int32 BattleId, bool SkipPrepare, bool SkipAnim, bool NotRecordScore);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAbortBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecordScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNearEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLastHit() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Hbk_ShowBattleResult(UObject* WorldContextObject, FVector2D Offset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStageRank(int32 ContinueCount, bool& bRankDownByContinue) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScoreBonusTimeRate(EHbkScoreActionType ActionType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRhythmMeterRank() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRhythmMeterAccumulatedValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRhythmMeterAccumulatedRate() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRankBonusPoint(int32 Rank) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJustTimingRank(float Percent) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentBattleScore() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleTimeRank(int32 BattleId, float Time) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleScoreRank(int32 BattleId, float Score) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleRank(int32 ScoreRank, int32 JustTimingRank, int32 TimeRank) const;
    
public:
    UFUNCTION(BlueprintCallable)
    int32 GetAliveEnemyCount();
    
    UFUNCTION(BlueprintCallable)
    void DebugStageResult();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugChangeRhythmRank(const FString& RankString);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearBattleManager();
    
    UFUNCTION(BlueprintCallable)
    void ChangeRhythmMeterAmount(EHbkRhythmMeterActionType ActionType);
    
};

