#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ActorActivateInterface.h"
#include "HbkEnemyResetEventDelegateDelegate.h"
#include "HbkEnemyResetKit.h"
#include "HbkEnemyResetPlayList.h"
#include "Templates/SubclassOf.h"
#include "HbkEnemyResetEventActor.generated.h"

class AHbkLevelSequenceActor;
class UDataTable;
class UHbkGameAgentComponent;
class UHbkPlayLvSeqOption;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemyResetEventActor : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyResetEventDelegate OnEndEnemyResetEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkLevelSequenceActor> EnemyResetLevelSequenceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayLvSeqOption* PlayOptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyResetPlayList PlayList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EnemyResetDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> CurPlayList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkLevelSequenceActor> EnemyResetLevelSequenceActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkEnemyResetEventActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetEnemyResetKit(const FHbkEnemyResetKit& NewKit);
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentPlayList();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseEnemyResetEvent(bool bCallOnEnd);
    
    UFUNCTION(BlueprintCallable)
    void NextSetEnemyResetKit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkPlayLvSeqOption* GetPlayOptionData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkLevelSequenceActor* GetEnemyResetLVSQ();
    
    UFUNCTION(BlueprintCallable)
    bool DeployEnemyResetEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnActivateEnemyResetEvent();
    

    // Fix for true pure virtual functions not being implemented
};

