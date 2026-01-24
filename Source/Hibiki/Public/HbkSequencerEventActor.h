#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "HbkSequencerEventAssetDelegateDelegate.h"
#include "HbkSequencerEventDelegateDelegate.h"
#include "HbkSequencerEventKit.h"
#include "Templates/SubclassOf.h"
#include "HbkSequencerEventActor.generated.h"

class AHbkLevelSequenceActor;
class UHbkGameAgentComponent;
class UHbkPlayLvSeqOption;
class ULevelSequence;

UCLASS(Blueprintable)
class HIBIKI_API AHbkSequencerEventActor : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSequencerEventDelegate OnEndSequencerEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSequencerEventAssetDelegate OnPreLoadEndAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkLevelSequenceActor> LevelSequenceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayLvSeqOption* PlayOptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkLevelSequenceActor> LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequenceAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkSequencerEventActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetSequencerEventKit(const FHbkSequencerEventKit& NewKit);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseSequencerEvent(bool bCallOnEnd, bool bSkipped);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PreLaodLevelSequenceAsset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPreLoadEndLevelSequence();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadEndLevelSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkLevelSequenceActor* GetSequencerEventLVSQ();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkPlayLvSeqOption* GetPlayOptionData();
    
    UFUNCTION(BlueprintCallable)
    int32 DeploySequencerEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnActivateSequencerEvent();
    

    // Fix for true pure virtual functions not being implemented
};

