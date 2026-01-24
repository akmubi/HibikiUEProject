#pragma once
#include "CoreMinimal.h"
#include "EHbkInteractEventType.h"
#include "HbkGimmickBase.h"
#include "HbkInteractGimmickParam.h"
#include "HbkInteractTalkParam.h"
#include "HbkInteractTutorialParam.h"
#include "InteractionActorDelegateDelegate.h"
#include "HbkGimmick_Interact.generated.h"

class AActor;
class UHbkGameplayTask_AgentTagActivate;
class UHbkGameplayTask_AgentTagDeactivate;
class UHbkInteractTargetComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkGimmick_Interact : public AHbkGimmickBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoDeactivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanInteractOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitTimeUntilReusable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkInteractEventType InteractEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkInteractTutorialParam TutorialParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkInteractGimmickParam GimmickParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkInteractTalkParam TalkParam;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionActorDelegate OnInteractionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsInteracted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkInteractTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_AgentTagActivate* GimmickActivateTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_AgentTagDeactivate* GimmickDeactivateTask;
    
public:
    AHbkGimmick_Interact(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTalk(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowTutorial();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPauseInteract(bool Pause);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSuccessGimmickDeactivate();
    
    UFUNCTION(BlueprintCallable)
    void OnSuccessGimmickActivate();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteracted() const;
    
};

