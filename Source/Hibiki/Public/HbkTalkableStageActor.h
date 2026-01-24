#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "HbkDamageInterface.h"
#include "HbkTalkableActor.h"
#include "HbkTalkableInfo_t.h"
#include "HbkTalkableStageActor_OnEndActionDelegate.h"
#include "HbkTalkableStageActor_OnInteractDelegate.h"
#include "HbkTalkableTalkData_t.h"
#include "HbkTalkable_BreakInfo_t.h"
#include "HbkTalkable_MeshKitInfo_t.h"
#include "HbkTalkable_SyncMeshInfo2_t.h"
#include "HbkTalkableStageActor.generated.h"

class AActor;
class AController;
class UDamageType;
class UHbkDamageComponent;
class UHbkTalkableComponent;

UCLASS(Blueprintable)
class AHbkTalkableStageActor : public AHbkTalkableActor, public IHbkDamageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AHbkTalkableActor>> SyncActionTalkableActorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTalkable_SyncMeshInfo2_t> SyncMeshArray;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableStageActor_OnInteract OnBeginTalkStageActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableStageActor_OnInteract OnEndTalkStageActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableStageActor_OnInteract OnEndAllInteractionTalkStageActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkableStageActor_OnEndAction OnEndAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PhysicsBodyPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTalkable_MeshKitInfo_t> BreakMeshKitInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkTalkable_BreakInfo_t> BreakInfoArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLookAtPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtMinDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LookAtMaxDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InteractTargetAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CapsuleAttachName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTalkableComponent* TalkableComponent;
    
public:
    AHbkTalkableStageActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnNoteWhole_RhythmEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTalkActor(AActor* Talker, const FName TalkResultOption, const FHbkTalkableInfo_t& TalkDataInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnEndTalkAction(AActor* pActor, const FHbkTalkableInfo_t& l_TalkInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTrigger(float Damage, const FGameplayTagContainer& DamageTags, const AActor* DamageCauser, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginTalkActor(AActor* Talker, const FHbkTalkableTalkData_t& l_TalkData);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginTalkAction(AActor* pActor, const FHbkTalkableTalkData_t& l_TalkData);
    
public:
    UFUNCTION(BlueprintCallable)
    float GetLookAtPlayerAngleZ();
    
    UFUNCTION(BlueprintCallable)
    bool CanLookAt();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndTalkStageActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndAllInteractionTalkStageActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndAction(const FHbkTalkableInfo_t& TalkInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeginTalkStageActor();
    

    // Fix for true pure virtual functions not being implemented
};

