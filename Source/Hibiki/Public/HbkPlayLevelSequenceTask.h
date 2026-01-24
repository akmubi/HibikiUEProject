#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHbkActorBindingMethod.h"
#include "EHbkPlayLvSeqStartPos.h"
#include "HbkBlueprintAsyncActionBase.h"
#include "HbkLevelSequenceBindParam.h"
#include "HbkLvSeqFinishedDelegateDelegate.h"
#include "HbkPlayLevelSequenceTask.generated.h"

class AActor;
class AHbkLevelSequenceActor;
class UHbkPlayLevelSequenceTask;
class UHbkPlayLvSeqOption;
class UObject;

UCLASS(Blueprintable)
class HIBIKI_API UHbkPlayLevelSequenceTask : public UHbkBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLvSeqFinishedDelegate OnFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkLevelSequenceActor> LsActor;
    
public:
    UHbkPlayLevelSequenceTask();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayLevelSequenceTask* PlayLevelSequenceEX(UObject* WorldContextObject, AHbkLevelSequenceActor* LevelSequenceActor, EHbkActorBindingMethod AutoBindIngamePlayer, const TArray<FHbkLevelSequenceBindParam>& BindingOthers, bool bHideIngamePlayer);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayLevelSequenceTask* PlayLevelSequence2(UObject* WorldContextObject, AHbkLevelSequenceActor* LevelSequenceActor, int32 StarFramePosition, float PlayRate, EHbkActorBindingMethod AutoBindIngamePlayer, bool bHideIngamePlayer, bool bIsEventSoonAfter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayLevelSequenceTask* PlayLevelSequence(UObject* WorldContextObject, AHbkLevelSequenceActor* LevelSequenceActor, EHbkActorBindingMethod AutoBindIngamePlayer, bool bHideIngamePlayer, UHbkPlayLvSeqOption* PlayOptionData, EHbkPlayLvSeqStartPos StartPos);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSyncInitialize();
    
    UFUNCTION(BlueprintCallable)
    void OnSkipToEndLevelSeq();
    
    UFUNCTION(BlueprintCallable)
    void OnPostStartedPlayingLevelSeq();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnLvSeqEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLeaveMap();
    
    UFUNCTION(BlueprintCallable)
    void OnGameUnPuase();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePuase();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLevelSeq();
    
    UFUNCTION(BlueprintCallable)
    void OnActivatePreSync(int32 NoteCount, bool bDownBeat);
    
};

