#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "ActorActivateInterface.h"
#include "EHintSystemVolmeStateType.h"
#include "HbkHintSystemVolmeActivateActor.h"
#include "HbkPlayingLevelSeqInfo.h"
#include "HbkTalkContext.h"
#include "HbkTalkSessionConf.h"
#include "HbkHintSystemVolme.generated.h"

class AHbkHintSystemVolme;
class AHbkTalkSession;
class UHbkGameAgentComponent;
class UHbkHintButtonAsyncAction;
class UObject;

UCLASS(Blueprintable)
class AHbkHintSystemVolme : public AVolume, public IActorActivateInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTalkEventDelegate, AHbkHintSystemVolme*, HintSystemVolme);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkEventDelegate OnTalkStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTalkEventDelegate OnTalkEndEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DispHintButtonTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf TalkSessionConf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInhibitPlayerControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkHintSystemVolmeActivateActor> TalkStartActivateActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkHintSystemVolmeActivateActor> TalkEndActivateActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHintsDuringBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EHintSystemVolmeStateType StateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float bInPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkHintButtonAsyncAction* ShowHintButtonAsyncAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkTalkSession* TalkSession;
    
public:
    AHbkHintSystemVolme(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WaitEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnPrepareBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void OnEndHintButton();
    
    UFUNCTION(BlueprintCallable)
    void OnEndBattle();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EnableHintSystemVolume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DisableHintSystemVolume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CloseTalkCurrentHintSystemVolume(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AllowEnd();
    

    // Fix for true pure virtual functions not being implemented
};

