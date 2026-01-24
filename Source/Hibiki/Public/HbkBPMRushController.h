#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "EHbkBattleResultType.h"
#include "EHbkMusicTitleTimingType.h"
#include "EHbkScoreActionType.h"
#include "HbkBattleResultParam.h"
#include "HbkBPMRushController.generated.h"

class UAkAudioEvent;
class UHbkBPMRushDebug;
class UHbkBPMRushGaugeWidget;
class UHbkBPMRushSettingsDataAsset;
class UHbkGameAgentComponent;
class UHbkGameplayTask_BPMRushBattle;
class UHbkGameplayTask_BPMRushTopMenu;
class UHbkGameplayTask_BPMRushWaveStart;
class UHbkGameplayTask_ScreenTransition;
class UObject;

UCLASS(Blueprintable)
class AHbkBPMRushController : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaveStartedDelegate, bool, bFirst, int32, WaveIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRhythmGaugeChangePointDelegate, float, ChangeValue);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPhaseChange, bool, bImmediate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNewGameDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndWaveDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndBPMRushDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBattleBegunDelegate, bool, bFirst);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAutoSaveDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndBPMRushDelegate OnEndBPMRush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewGameDelegate OnNewGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaveStartedDelegate OnWaveStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleBegunDelegate OnBattleBegun;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWaveDelegate OnSuccessWave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndWaveDelegate OnFailWave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPhaseChange OnPhaseChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoSaveDelegate OnAutoSave;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkBPMRushSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_ScreenTransition* ScreenTransitionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_BPMRushTopMenu* BPMRushTopMenuTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_BPMRushWaveStart* BPMRushWaveStartTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_BPMRushBattle* BPMRushBattleTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkBPMRushGaugeWidget* GaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkBPMRushDebug* BPMRushDebug;
    
public:
    AHbkBPMRushController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void WaveStartScreenTransitionFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void WaveStarted();
    
    UFUNCTION(BlueprintCallable)
    void WaveChangeScreenTransitionFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void WaveChangeScreenTransitionFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void WaitWaveStartChangeMusic();
    
    UFUNCTION(BlueprintCallable)
    void WaitWaveChangeState();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToGameOverInBPMRush(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SuspendBPMRushVfx(UObject* WorldContextObject, FGameplayTagContainer RoleTags, FName callSign);
    
private:
    UFUNCTION(BlueprintCallable)
    void SuccessBattle();
    
    UFUNCTION(BlueprintCallable)
    void StartTopMenu();
    
    UFUNCTION(BlueprintCallable)
    void StartGameOverWidget();
    
    UFUNCTION(BlueprintCallable)
    void StartGameOverSequencer();
    
    UFUNCTION(BlueprintCallable)
    void StartGameOver();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartBPMRushWave(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartBPMRushTopMenu(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartBPMRushBattle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldBPMRushGimmickActivateExtInt(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ShouldBPMRushGameEnvPhaseSet(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SawBPMRushBattleTutorial(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResumeBPMRushVfx(UObject* WorldContextObject, FGameplayTagContainer RoleTags, FName callSign);
    
private:
    UFUNCTION(BlueprintCallable)
    void PostStartPlay();
    
    UFUNCTION(BlueprintCallable)
    void PlayAudienceCheersSe(float RhythmGaugeChangeValue);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void NextBPMRushWave(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void NewGame();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSawBPMRushBattleTutorial(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBPMRushPhaseChangeImmediate(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void GotoTopMenu();
    
    UFUNCTION(BlueprintCallable)
    void GotoHideOut();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EHbkMusicTitleTimingType GetBPMRushMusicTitleType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetBPMRushGimmickActivateExtIntValue(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetBPMRushGameEnvPhaseExtIntValue(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void FailBattle();
    
    UFUNCTION(BlueprintCallable)
    void DebugJumpStartScreenTransitionFadeOut();
    
    UFUNCTION(BlueprintCallable)
    bool DebugJumpStartDuringPreparation(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateBPMRushBattle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearBPMRush(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void BeginRecordBattleScore();
    
    UFUNCTION(BlueprintCallable)
    void BattleScorePointChanged(EHbkScoreActionType ActionType, FGameplayTagContainer ActionTags, float ChangeValue);
    
    UFUNCTION(BlueprintCallable)
    void BattleResultConfirmed(const FHbkBattleResultParam& Result, EHbkBattleResultType ResultType);
    
    UFUNCTION(BlueprintCallable)
    void BattleBegun(bool bFirst);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ActivateBPMRushWaveStartTrigger(UObject* WorldContextObject);
    
};

