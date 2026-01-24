#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkMinimissionActor_TalkInfo.h"
#include "HbkMobActor.h"
#include "HbkTalkContext.h"
#include "HbkMinimissionActor.generated.h"

class AActor;
class AController;
class UCapsuleComponent;
class UDamageType;
class UDataTable;
class UHbkDamageComponent;
class UHbkInteractTargetComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkMinimissionActor : public AHbkMobActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* TalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMinimissionActor_TalkInfo MissionStartTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMinimissionActor_TalkInfo MissionProgressTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMinimissionActor_TalkInfo MissionSuccessTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMinimissionActor_TalkInfo DamageTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMinimissionActor_TalkInfo MissionSuccessDamageTalk;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkInteractTargetComponent* InteractTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* DamageComponent;
    
public:
    AHbkMinimissionActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReceiveMissionSuccessTalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveMissionStartTalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveMissionReportCompletedTalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveMissionProgressTalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveDamageTalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveDamageSuccessTalkEnd(const FHbkTalkContext TalkContext);
    
    UFUNCTION(BlueprintCallable)
    void OnInteraction(AActor* Interactor);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void MissionCompleteTalk();
    
};

