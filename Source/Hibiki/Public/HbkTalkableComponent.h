#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkTalkContext.h"
#include "HbkTalkableCompBeginActionDelegate.h"
#include "HbkTalkableCompBeginTalkDelegate.h"
#include "HbkTalkableCompEndActionDelegate.h"
#include "HbkTalkableCompEndTalkDelegate.h"
#include "HbkTalkableInfo_t.h"
#include "HbkTalkableTalkData_t.h"
#include "HbkTalkableComponent.generated.h"

class AActor;
class AController;
class AHbkTalkEventSequence;
class UDamageType;
class UDataTable;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkTalkableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableCompBeginTalk OnBeginTalk;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableCompEndTalk OnEndTalk;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableCompBeginAction OnBeginAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableCompEndAction OnEndAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TalkableInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableGameFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHiddenInTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoInteractWhenAllTalkEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResumeInteractWhenActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkTalkEventSequence> ActivateTKEV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableInfo_t InteractionTalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableInfo_t DamageTalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableInfo_t ActivateTalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableInfo_t DeactivateTalkData;
    
public:
    UHbkTalkableComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ResumeInteract();
    
    UFUNCTION(BlueprintCallable)
    void ReceiveTalkSessionEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveActionEnd();
    
    UFUNCTION(BlueprintCallable)
    void PauseInteract();
    
    UFUNCTION(BlueprintCallable)
    void OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnInteraction(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateTalkable(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateExtIntTalkable(AActor* Activator, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateTalkable(AActor* Activator);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateExtIntTalkable(AActor* Activator, int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void Invoke_OnEndTalk(const FName TalkResultOption, FHbkTalkableInfo_t& TalkDataInfo);
    
    UFUNCTION(BlueprintCallable)
    void Invoke_OnEndAction(FHbkTalkableInfo_t& TalkDataInfo);
    
    UFUNCTION(BlueprintCallable)
    void Invoke_OnBeginTalk(FHbkTalkableTalkData_t& TalkDataInfo);
    
    UFUNCTION(BlueprintCallable)
    void Invoke_OnBeginAction(FHbkTalkableTalkData_t& TalkDataInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTalkEnd(const FName TalkResultOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndTalkNearBy(AActor* InNearByActor, const FName& InTalkReOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeginTalkNearBy(AActor* InNearByActor);
    
    UFUNCTION(BlueprintCallable)
    void BeginTalk(UObject* Interactor, bool bUnPlayable, bool bInteractTalk, FHbkTalkableInfo_t& Info);
    
    UFUNCTION(BlueprintCallable)
    void BeginInteractTalk(UObject* Interactor, bool bUnPlayable);
    
    UFUNCTION(BlueprintCallable)
    void BeginDeactivateTalk(UObject* DeactivateCauser, bool bUnPlayable);
    
    UFUNCTION(BlueprintCallable)
    void BeginDamageTalk(UObject* DamageCauser, bool bUnPlayable);
    
    UFUNCTION(BlueprintCallable)
    void BeginActivateTalk(UObject* ActivateCauser, bool bUnPlayable);
    
};

