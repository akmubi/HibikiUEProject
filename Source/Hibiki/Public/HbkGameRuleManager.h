#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EHbkDifficultyType.h"
#include "EHbkFullScreenMovieManualStopType.h"
#include "EHbkGameOverEventType.h"
#include "EHbkRestartEventType.h"
#include "GameRuleDisplayMovieEndDelegateDelegate.h"
#include "GameRuleDisplayMovieStartDelegateDelegate.h"
#include "GameRuleEndMovieDelegateDelegate.h"
#include "GameRuleGameOverDelegateDelegate.h"
#include "GameRuleGotoHideOutDelegateDelegate.h"
#include "GameRuleGotoRTMenuDelegateDelegate.h"
#include "GameRuleMovieEventDelegateDelegate.h"
#include "GameRuleOnGamePauseDelegateDelegate.h"
#include "GameRuleOnGameUnPauseDelegateDelegate.h"
#include "GameRulePreResetPlayerPosDelegateDelegate.h"
#include "GameRuleResetPlayerPosDelegateDelegate.h"
#include "GameRuleSetRestartPointDelegateDelegate.h"
#include "HbkBinkResources.h"
#include "HbkDifficultyParamsRow.h"
#include "HbkGameOverEventInfoMap.h"
#include "HbkGameOverEventMap_WithDamage.h"
#include "HbkLevelDifficultyParamsRow.h"
#include "HbkRestartEventInfoMap.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "HbkGameRuleManager.generated.h"

class AActor;
class AHbkLevelSequenceActor;
class AHbkSetPlayerRestartPosTrigger;
class UAkAudioEvent;
class UBinkMediaPlayer;
class UBinkMediaTexture;
class UDataTable;
class UHbkDifficultyAsset;
class UHbkFullScreenMovieLoadImageWidget;
class UHbkFullScreenMovieWidget;
class UHbkGameEnvState;
class UHbkHowToPlayController;
class UHbkMoviePlayer;
class UHbkNoticePopupControl;
class UHbkPhotoModeController;
class UHbkRhythmDungeonController;
class UHbkStageResultNextSelectWidget;
class UMediaPlayer;
class UMediaSource;
class UMediaTexture;
class UObject;
class UTexture;
class UTexture2D;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGameRuleManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleDisplayMovieStartDelegate OnDisplayMovieStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleDisplayMovieEndDelegate OnDisplayMovieEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleDisplayMovieEndDelegate OnDisplayMoviePlayToEnd;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRulePreResetPlayerPosDelegate OnPreResetPlayerPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleResetPlayerPosDelegate OnPostResetPlayerPosition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleSetRestartPointDelegate OnSetRestartPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleMovieEventDelegate OnStartMovie;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleEndMovieDelegate OnEndedMovie;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGameOverDelegate OnStartGameOver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGameOverDelegate OnStartGameoverSequencer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGameOverDelegate OnSimpleRestart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGameOverDelegate OnShowGameOverWidgetForRT;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGameOverDelegate OnShowGameOverWidgetForRD;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGameOverDelegate OnShowGameOverWidgetForBPMRush;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGotoHideOutDelegate OnGotoHideOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGotoRTMenuDelegate OnGotoRTMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleOnGamePauseDelegate OnGamePause;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleOnGameUnPauseDelegate OnGameUnPause;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGotoRTMenuDelegate OnGotoBPMRushMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameRuleGotoRTMenuDelegate OnGotoRDMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkFullScreenMovieWidget> FullScreenMovieWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkFullScreenMovieLoadImageWidget> FullScreenMovieLoadImageWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkLevelSequenceActor> GameOverLevelSequenceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameOverToTitleSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameOverToHideOutSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrainingRoomRoomToHideOutSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpectraRoomToHideOutSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RhythmTowerToHideOutSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RhythmTower2ToHideOutSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BPMRushToHideOutSeqName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRestartEventInfoMap RestartEventInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultAutoResetPlayerPosZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameOverEventInfoMap GameOverEventInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameOverEventMap_WithDamage GameOverEventMap_WithDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkHowToPlayController> HowToPlayControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BeginPauseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EndPauseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBinkResources FullScreenMovieBinkResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBinkResources DisplayMovieBinkResources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MovieInfoTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkMoviePlayer* FullScreenMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameEnvState* GameEnvStateObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkMoviePlayer* DisplayMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMediaPlayer> SkillDescMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkMoviePlayer* SkillDescMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMediaPlayer> TutorialMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkMoviePlayer* TutorialMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkDifficultyAsset* DifficultyAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkStageResultNextSelectWidget> StageResultNextSelectWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkStageResultNextSelectWidget> StageResultNextSelectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkNoticePopupControl> NoticePopupControlClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkNoticePopupControl* NoticePopupControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkHowToPlayController* HowToPlayController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkPhotoModeController> PhotoModeControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPhotoModeController* PhotoModeController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhotoCollisionHalfRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> PhotoTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkRhythmDungeonController> RhythmDungeonControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmDungeonController* RhythmDungeonController;
    
public:
    UHbkGameRuleManager();

    UFUNCTION(BlueprintCallable)
    bool TutorialMoviePlayBink(const FName& MovieInfoKey, UBinkMediaPlayer* BinkPlayer, UBinkMediaTexture* BinkTexture, bool Sound);
    
    UFUNCTION(BlueprintCallable)
    void TutorialMoviePlay(UMediaPlayer* MediaPlayer, UMediaSource* MediaSource, bool Sound);
    
    UFUNCTION(BlueprintCallable)
    void StopFullScreenMovie(EHbkFullScreenMovieManualStopType ManualStopType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartGameOverEvent(UObject* WorldContextObject, EHbkGameOverEventType EventType);
    
    UFUNCTION(BlueprintCallable)
    void SkillDescMoviePlay(UMediaPlayer* MediaPlayer, UMediaSource* MediaSource, bool Sound);
    
    UFUNCTION(BlueprintCallable)
    void ShowGameOverWidget();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetSpectraBattleState(UObject* WorldContextObject, bool bState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetRestartTransform(UObject* WorldContextObject, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetRestartPoint(UObject* WorldContextObject, AActor* PointActor, AHbkSetPlayerRestartPosTrigger* PointOwnerTrigger);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetInTutorialStage(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGameOverTalkOverride(UObject* WorldContextObject, UDataTable* GameOverTalkData, FName GameOverStartTalkLine);
    
    UFUNCTION(BlueprintCallable)
    void SetGameOverSequencerTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetGameOverEventType(EHbkGameOverEventType NewEventType);
    
    UFUNCTION(BlueprintCallable)
    void SetFullScreenImage(UTexture2D* Texture, float BlendTime, float Opacity);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetChangeableNowDifficultyType(UObject* WorldContextObject, bool bChangeable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetAutoResetPlayerPositionZ(UObject* WorldContextObject, float NewPosZ);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestartRhythmTower2(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestartRhythmTower(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RestartBPMRush(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ResetGameOverEventType();
    
    UFUNCTION(BlueprintCallable)
    void PlayGameOverSequencer();
    
    UFUNCTION(BlueprintCallable)
    bool PlayFullScreenMovieBink(const FName& MovieInfoKey, bool AutoClose, EHbkFullScreenMovieManualStopType ManualStopType);
    
    UFUNCTION(BlueprintCallable)
    bool PlayFullScreenMovie(UMediaPlayer* MPlayer, UMediaSource* MSource, UMediaTexture* MTexture, bool AutoClose, EHbkFullScreenMovieManualStopType ManualStopType);
    
    UFUNCTION(BlueprintCallable)
    void OnShowGameOverWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectReturnToTitle();
    
    UFUNCTION(BlueprintCallable)
    void OnSelectRestart();
    
    UFUNCTION(BlueprintCallable)
    void OnFSMovieOpenFailed(const FString& FailedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnFSMovieOpened(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnFSMovieEndReached();
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayMovieOpened(const FString& OpenedUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayMovieEndReached();
    
    UFUNCTION(BlueprintCallable)
    void OnDisplayMovieClosed();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsUnlockMasterDifficulty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingFullScreenMovie() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsDebugRestartMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsChangeableNowDifficultyType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HbkSetGamePaused(UObject* WorldContextObject, bool bPaused);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GotoTitle(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GotoHideOutDebug(UObject* WorldContextObject, bool AllStageCleared, int32 StageNo, bool AfterClear, bool FirstStep);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GotoHideOut(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSpectraBattleState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EHbkDifficultyType GetNowDifficultyType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetLevelDifficultyParams(UObject* WorldContextObject, FHbkLevelDifficultyParamsRow& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkFullScreenMovieWidget* GetFullScreenWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetFullScreenMediaTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetDifficultyParams(UObject* WorldContextObject, FHbkDifficultyParamsRow& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static EHbkDifficultyType GetConfigNowDifficultyType(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ForceGameOver(UObject* WorldContextObject, bool bPlayerDied);
    
    UFUNCTION(BlueprintCallable)
    void FinishPhotoModeController();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndGameOverEvent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndDisplayMovie(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void EmptyTutorialMovie();
    
    UFUNCTION(BlueprintCallable)
    void ClearFullScreenImage(float BlendTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeNowDifficultyType(UObject* WorldContextObject, EHbkDifficultyType Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool Blueprint_ResetPlayerPosition(UObject* WorldContextObject, EHbkRestartEventType RestartType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkRhythmDungeonController* Blueprint_GetRhythmDungeonController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BeginDisplayMovieBink(UObject* WorldContextObject, FName MovieInfoKey, bool bLoop);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BeginDisplayMovie(UObject* WorldContextObject, UMediaTexture* NewMediaTexture, UMediaSource* NewMediaSource, UMediaPlayer* NewMediaPlayer);
    
};

