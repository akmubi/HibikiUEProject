#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameplayTagContainer.h"
#include "EHbkLevelSeqStopReason.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "HbkPlayingTalkEventSceneInfo.h"
#include "HbkGameModeBase.generated.h"

class AHbkGameModeBase;
class UObject;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AHbkGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGameModeBase_OnStartTalkEventScene, const FHbkPlayingTalkEventSceneInfo&, Info);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGameModeBase_OnStartLevelSequence, const FHbkPlayingLevelSeqInfo&, Info);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHbkGameModeBase_OnPostStartPlay);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGameModeBase_OnPauseChanged, bool, Changed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGameModeBase_OnEndTalkEventScene, const FHbkPlayingTalkEventSceneInfo&, Info);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGameModeBase_OnEndLevelSequence, const FHbkPlayingLevelSeqInfo&, Info);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameModeBase_OnPostStartPlay OnPostStartPlayDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameModeBase_OnStartLevelSequence OnStartLevelSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameModeBase_OnEndLevelSequence OnEndLevelSequence;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameModeBase_OnStartTalkEventScene OnStartTalkEventScene;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameModeBase_OnEndTalkEventScene OnEndTalkEventScene;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameModeBase_OnPauseChanged OnPauseChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName_HideOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName_TrainingRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName_SpectraRoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName_RhythmTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName_GameStudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName_RhythmTower2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName_BPMRush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCsRecording;
    
public:
    AHbkGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopPlayingCSEV(UObject* WorldContextObject, const FGameplayTagContainer CsevTags, EHbkLevelSeqStopReason StopReason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetToDefaultOnlinePresence(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetOnlinePresence(UObject* WorldContextObject, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    void RestartSoundState(const FName& InPlayerStartTag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MapCapture_MoveEditorCamera(UObject* WorldContextObject, float TargetScale);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTrainingRoomLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsTitleMenuLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSpectraRoom(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSpectraHUBLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSpectraBattle(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRhythmTowerLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRhythmTower2Level(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsPlayingLevelSequence(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsHideOutLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsGameStudioLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCutSceneRecordingMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBPMRushLevel(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetSpectraRoomName(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetRestartCheckPoint(UObject* WorldContextObject, bool& bUsedDebugJump);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHbkGameModeBase* GetHbkGameMode(UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartTalkEventScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnStartLevelSequence(int32 NewCount, const FName& LvSeqName, bool IsRecording);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPostStartPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnLoadGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndTalkEventScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndLevelSequence(int32 NewCount, const FName& LvSeqName, bool IsRecording);
    
};

