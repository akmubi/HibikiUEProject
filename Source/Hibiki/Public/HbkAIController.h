#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIFinishQTEDelegateDelegate.h"
#include "AIPartsBrokenDelegateDelegate.h"
#include "AIPostTakeDamageSignatureDelegate.h"
#include "EHbkAttackRangeType.h"
#include "HbkAIUpdate.h"
#include "HbkBlockDamageParam.h"
#include "HbkEnemyAttackAnimInfo.h"
#include "HbkEnemyAttackInfo.h"
#include "HbkAIController.generated.h"

class AActor;
class AController;
class AHbkCharacter;
class APawn;
class UBehaviorTree;
class UDamageType;
class UTngDamageType;

UCLASS(Blueprintable)
class HIBIKI_API AHbkAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPostTakeDamageSignature OnPostTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPostTakeDamageSignature OnPostTakeDamageNoReaction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPartsBrokenDelegate OnBrokenParts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIFinishQTEDelegate OnFinishQTE;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageStateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitAIStop;
    
public:
    AHbkAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateExAttackState(float DeltaSeconds, TEnumAsByte<HbkAIUpdate::Type>& ResultExec);
    
    UFUNCTION(BlueprintCallable)
    void UpdateDamageState(float DeltaSeconds, TEnumAsByte<HbkAIUpdate::Type>& ResultExec);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttackState(float DeltaSeconds, TEnumAsByte<HbkAIUpdate::Type>& ResultExec);
    
    UFUNCTION(BlueprintCallable)
    void UpdateActionState(float DeltaSeconds, TEnumAsByte<HbkAIUpdate::Type>& ResultExec);
    
    UFUNCTION(BlueprintCallable)
    void StopAI();
    
    UFUNCTION(BlueprintCallable)
    void SetDamageStateEnable(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void RestartAI();
    
    UFUNCTION(BlueprintCallable)
    void Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnBrokenParts(FName PartName);
    
public:
    UFUNCTION(BlueprintCallable)
    void Receive_OnAttackRepelledNoReaction(const AActor* Blocker, const FHbkBlockDamageParam& BlockParam);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAttackRepelled(const AActor* Blocker, const FHbkBlockDamageParam& BlockParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNextBeatForAction(int32 BeatCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutsideCamera(AActor* TargetActor) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableAILogic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringQTE() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAILogicSleep() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkCharacter* GetHbkCharacter() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishQTE(bool Success);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeStateToExAttack(FGameplayTag ExAttackTag);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeStateToDamage(FGameplayTagContainer DamageTags, const UTngDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeStateToAttackWithTag(FGameplayTag AttackNameTag);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeStateToAttack(EHbkAttackRangeType RangeType);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeStateToAction(FGameplayTagContainer EnemyActionTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanTransitDamageState(const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_SetupBehaviorTree();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostTakeDamageNoReaction(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnInitialize(APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_InitializeBlackBoard(APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FGameplayTagContainer Blueprint_GetCurrentDamageTags(const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EndStateToDamage(APawn* ControlledPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeStateToExAttack(APawn* ControlledPawn, FGameplayTag ExAttackTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeStateToDamage(APawn* ControlledPawn, FGameplayTagContainer DamageTags, const UTngDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeStateToAttack2(APawn* ControlledPawn, const FHbkEnemyAttackAnimInfo& AnimInfo, FGameplayTag AttackTypeTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeStateToAttack(APawn* ControlledPawn, const FHbkEnemyAttackInfo& attackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeStateToAction(APawn* ControlledPawn, FGameplayTagContainer EnemyActionTags);
    
    UFUNCTION(BlueprintCallable)
    void BeginQTE();
    
    UFUNCTION(BlueprintCallable)
    void AbortExAttackState();
    
    UFUNCTION(BlueprintCallable)
    void AbortAttackState();
    
};

