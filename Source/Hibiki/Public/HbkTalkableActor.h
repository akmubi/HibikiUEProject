#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "EHbkTalkableMode.h"
#include "HbkTalkContext.h"
#include "HbkTalkableActivateDelegate.h"
#include "HbkTalkableActivateExtIntDelegate.h"
#include "HbkTalkableBeginTalkDelegate.h"
#include "HbkTalkableEndTalkDelegate.h"
#include "HbkTalkableInteractDelegate.h"
#include "HbkTalkableTalkCueDelegate.h"
#include "HbkTalkable_SignificanceStateChangedDelegate.h"
#include "HbkTalkableActor.generated.h"

class AHbkTalkEventSequence;
class AHbkTalkableActor;
class UAnimMontage;
class UAnimationAsset;
class UCapsuleComponent;
class UDataTable;
class UHbkGameAgentComponent;
class UHbkInteractTargetComponent;
class UHbkSkeletalMeshComponent;
class UObject;

UCLASS(Blueprintable)
class AHbkTalkableActor : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableBeginTalk OnBeginTalk;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableEndTalk OnEndTalk;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableTalkCue OnTalkCue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableInteract OnInteracted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitialAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> InitialSyncActionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* InitialSyncAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkTalkEventSequence> ActivateTKEV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivateTKEVOptionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenInTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixPlayRate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableActivate OnActivateTalkable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableActivateExtInt OnActivateExtIntTalkable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableActivate OnDeactivateTalkable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableActivateExtInt OnDeactivateExtIntTalkable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StartTalkLineList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTalkableMode TalkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkableInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoOnceIntract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableResumOnTalkEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool significanceDisp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float significanceDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float noRenderMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float minTickInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkable_SignificanceStateChanged OnSignificanceStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSignificanceStateActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSkeletalMeshComponent* SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkInteractTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComponent;
    
public:
    AHbkTalkableActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnPauseForTkevSQ();
    
    UFUNCTION(BlueprintCallable)
    void SuspendTalkEndProcess();
    
    UFUNCTION(BlueprintCallable)
    void SuspendForTkevSQ();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopAction();
    
    UFUNCTION(BlueprintCallable)
    void ShowTalkableActorByAnim();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleActor(bool bNewVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetCallSign(const FName& NewCallSign);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResumeTalkEndProcess();
    
    UFUNCTION(BlueprintCallable)
    void ResumeInteract();
    
    UFUNCTION(BlueprintCallable)
    void ResumeForTkevSQ();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResumeAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RecieveTalkSessionEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void RecieveTalkCue(const FName TalkCue);
    
    UFUNCTION(BlueprintCallable)
    void PlaySyncAnimationAtHO(FName StartSection);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayActionByName(const FName& NewActName);
    
    UFUNCTION(BlueprintCallable)
    void PlayAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PauseInteract();
    
    UFUNCTION(BlueprintCallable)
    void PauseForTkevSQ();
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSignificanceStateEvent(bool IsActive);
    
    UFUNCTION(BlueprintCallable)
    void OnInteraction(AActor* Interactor);
    
public:
    UFUNCTION(BlueprintCallable)
    void Invoke_OnTalkCue(const FName TalkCueName);
    
    UFUNCTION(BlueprintCallable)
    void Invoke_OnEndTalk(const FName TalkResultOption);
    
    UFUNCTION(BlueprintCallable)
    void Invoke_OnBeginTalk();
    
    UFUNCTION(BlueprintCallable)
    void HideTalkableActorByAnim();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSyncActionActor();
    
public:
    UFUNCTION(BlueprintCallable)
    FName GetCallSign();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseTalkEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkEnd(const FName TalkResultOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkCueNearBy(AHbkTalkableActor* InNearByActor, const FName& InTalkCue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkCue(const FName TalkCueName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndTalkNearBy(AHbkTalkableActor* InNearByActor, const FName& InTalkResOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeginTalkNearBy(AHbkTalkableActor* InNearByActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginTalk(UObject* Interactor, bool bUnPlayable);
    

    // Fix for true pure virtual functions not being implemented
};

