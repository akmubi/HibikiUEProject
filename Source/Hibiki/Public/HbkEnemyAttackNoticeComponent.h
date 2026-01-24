#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AttackNoticeAttackAnimParam.h"
#include "AttackNoticeDelegateDelegate.h"
#include "AttackNoticeReactionParam.h"
#include "AttackNoticeTriggeredDelegateDelegate.h"
#include "BossRhythmAttackParam.h"
#include "HbkBlockDamageParam.h"
#include "HbkEnemyAttackNoticeComponent.generated.h"

class AActor;
class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class UAkAudioEvent;
class UAnimSequenceBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnemyAttackNoticeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeDelegate OnBeginNotice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeDelegate OnRhythmNotice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeDelegate OnRepelledSuccessfull;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeDelegate OnPlayTutorial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeDelegate OnSetNoticeParam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeDelegate OnAdjustLoopEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackNoticeTriggeredDelegate OnHealthTriggered;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* NoticeObjectSpawnSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ParrySuccessfullSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackNoticeAttackAnimParam> AttackAnimationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerHealthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnTriggerHitToIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnPlayerDied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefaultParryEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionNamePreTutorial;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdjustLoopEndBeginNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBossRhythmAttackParam BossRhythmAttackParam;
    
public:
    UHbkEnemyAttackNoticeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTriggerHealthRate(float NewRate);
    
    UFUNCTION(BlueprintCallable)
    void SetNoticeParam(FAttackNoticeReactionParam ReactionParam, UAnimSequenceBase* TriggerHitReactionAnim);
    
    UFUNCTION(BlueprintCallable)
    void SetNoteData(const FString& NoteData);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRhythmParry(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableEasyJudgeMode(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetCanTransitHealthTriggerEvent(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetBossRhythmParryParameter(FBossRhythmAttackParam NewParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReEnableParry();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndEffective(FGameplayTag StatusEffectTag);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnChangedHealth(float CurrentHealth, float OldHealth, float HealthRate);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAbortAttackState(AHbkEnemyCharacter* EnemyPawn, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNextAttackImpact(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnLocationAdjustedAction(AHbkEnemyCharacter* AttackerPawn, FVector TargetLocation, bool bIsKeepCurrentLocAndRot);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatAdjustLoopEvent(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void Notify_OnRepelled(const AActor* Blocker, const FHbkBlockDamageParam& BlockParam);
    
    UFUNCTION(BlueprintCallable)
    void Notify_OnAttackDodged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHealthTriggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableRhythmParry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableEasyJudgeMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTriggerHealthRate() const;
    
    UFUNCTION(BlueprintCallable)
    FBossRhythmAttackParam GetBossRhythmParryParameter();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisableInvincible();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelAttackNotice();
    
    UFUNCTION(BlueprintCallable)
    void BeginNotice();
    
    UFUNCTION(BlueprintCallable)
    void BeginImpact();
    
};

