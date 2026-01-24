#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EAIAttackRepelledSignatureDelegate.h"
#include "EAIOnPossessDelegate.h"
#include "EAIStartedActionDelegateDelegate.h"
#include "EEnemyIntentionState.h"
#include "HbkAIController.h"
#include "HbkEnemyAttackSelectInfo.h"
#include "HbkEnemyAIController.generated.h"

class AActor;
class AHbkCharacter;
class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class AHbkMoveTargetActor;
class APawn;
class UHbkActionParamComponent;
class UHbkEnemyAttackInfoComponent;
class UHbkGroupMemberComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemyAIController : public AHbkAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEAIOnPossess OnPossessDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEAIAttackRepelledSignature OnAttackRepelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEAIAttackRepelledSignature OnAttackRepelledNoReaction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEAIStartedActionDelegate OnStartedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEAIStartedActionDelegate OnEndedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEAIStartedActionDelegate OnStartedAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEAIStartedActionDelegate OnEndedAction;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGroupMemberComponent* GroupMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBBKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayAppearAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppearAnimIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurnDamageDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOldDamageSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStateFlowVer3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyIntentionState IntentionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkMoveTargetActor> MoveTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRequestMoveTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoveIdleRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> PathLocationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PathScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBattleState;
    
public:
    AHbkEnemyAIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetIsAttacking(AActor* TargetActor) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayAppearAnim(bool IsPlay, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetPathLocationList(TArray<FVector> LocationList);
    
    UFUNCTION(BlueprintCallable)
    void SetMovePathScore(float NewPathScore);
    
    UFUNCTION(BlueprintCallable)
    void SetIntentionState(EEnemyIntentionState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleStateEnable(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag SelectAttackTagName(const TArray<FHbkEnemyAttackSelectInfo>& SelectList) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestMoveTo(FVector TargetLocation, bool QuickMove);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_OnEndDamageState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_OnEndAttackState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_OnEndActionState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_OnBeginDamageState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_OnBeginAttackState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_OnBeginActionState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_OnAbortDamageState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_OnAbortAttackState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Receive_OnAbortActionState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
public:
    UFUNCTION(BlueprintCallable)
    bool OrderAttackCancel();
    
    UFUNCTION(BlueprintCallable)
    bool OrderAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNextBeatForAttack(int32 BeatCount);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsRequestMoveTo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayAppearAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOrderedAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionState() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetPathLocationList();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOutsideStepMoveDirection(AActor* TargetActor) const;
    
public:
    UFUNCTION(BlueprintCallable)
    float GetOffensiveValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkMoveTargetActor* GetMoveTargetActor() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMovePathScore();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveIdleRatio();
    
    UFUNCTION(BlueprintCallable)
    EEnemyIntentionState GetIntentionState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEnemyCharacter* GetHbkEnemyCharacter();
    
    UFUNCTION(BlueprintCallable)
    UHbkGroupMemberComponent* GetGroupMemberComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvoidDirection(AActor* TargetActor) const;
    
public:
    UFUNCTION(BlueprintCallable)
    UHbkEnemyAttackInfoComponent* GetAttackInfoComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackCoolTime();
    
    UFUNCTION(BlueprintCallable)
    UHbkActionParamComponent* GetActionParamComponent();
    
    UFUNCTION(BlueprintCallable)
    void DisableRequestMoveTo();
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector CalcBattlePosition(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnAttackRepelledNoReaction(APawn* ControlledPawn, const AActor* Blocker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnAttackRepelled(APawn* ControlledPawn, const AActor* Blocker);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_IsLongRangeEnemy(APawn* ControlledPawn) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float Blueprint_CalcVitalAttackRate(const AHbkCharacter* ControllCharacter);
    
};

