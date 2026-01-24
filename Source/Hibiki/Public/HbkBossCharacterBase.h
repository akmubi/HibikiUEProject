#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BossActionDelegateDelegate.h"
#include "BossChangeHealthDelegateDelegate.h"
#include "BossChangePhaseDelegateDelegate.h"
#include "BossUIEventDelegate.h"
#include "HbkActionParam.h"
#include "HbkBossActionVoiceContent.h"
#include "HbkBossHintTalkContent.h"
#include "HbkEnemyAttackBasicInfo.h"
#include "HbkEnemyAttackInfo.h"
#include "HbkEnemyAttackParam.h"
#include "HbkEnemyCharacter.h"
#include "HbkMultiItemTickets.h"
#include "HbkStagingInterface.h"
#include "HbkBossCharacterBase.generated.h"

class AActor;
class AController;
class AHbkBossAIController;
class AHbkBossStageControllerBase;
class AHbkEnemyAIController;
class UAnimSequenceBase;
class UDamageType;
class UDataTable;
class UHbkBattleStateComponent;
class UHbkBossAttackInfoComponent;
class UHbkDamagePartsComponent;
class UHbkGameplayTask_BossQTE;

UCLASS(Blueprintable)
class HIBIKI_API AHbkBossCharacterBase : public AHbkEnemyCharacter, public IHbkStagingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossChangeHealthDelegate OnChangeHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnBattleStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossChangePhaseDelegate OnChangePhase;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnPhaseStart;
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossUIEvent OnBossUIEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkBossStageControllerBase> OwnerStageController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossAttackInfoComponent* HbkBossAttackInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBattleStateComponent* HbkBattleState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamagePartsComponent* HbkDamageParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TargetBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrevLocationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TargetActorPrevLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHitAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFirstDamageAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets BossDropItemTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMacaronGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkBossHintTalkContent> HintTalkForSPAttackMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SPStagingDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHitSpecialAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttachedSpecialAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuppressAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExcludeJamComboStateOfSuppressAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityTakeDamageRate;
    
public:
    AHbkBossCharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WakeUpBoss();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetTargetActorPrevLocation();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetHitAttack();
    
    UFUNCTION(BlueprintCallable)
    void ReservePhase(int32 Phase);
    
    UFUNCTION(BlueprintCallable)
    bool ReflectChangePhase();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Receive_OnAttackRepelled(const AActor* Blocker);
    
    UFUNCTION(BlueprintCallable)
    void PlayBossHintTalk(FHbkBossHintTalkContent& Content);
    
    UFUNCTION(BlueprintCallable)
    void PlayBossActionVoice(FHbkBossActionVoiceContent& Content, bool IsForceStopPrevious);
    
public:
    UFUNCTION(BlueprintCallable)
    void PerformDownDamage(FGameplayTagContainer DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void PerformAttackBossFromAnimation(UAnimSequenceBase* InAnimation, const FHbkEnemyAttackParam InAttackParam);
    
    UFUNCTION(BlueprintCallable)
    void PerformAttackBoss(const FGameplayTag InAttackTag, const FHbkEnemyAttackParam InAttackParam);
    
    UFUNCTION(BlueprintCallable)
    void PerformActionBossFromAnimation(UAnimSequenceBase* InAnimation, const FHbkActionParam& InActionParam);
    
    UFUNCTION(BlueprintCallable)
    void PerformActionBoss(const FGameplayTag InAttackTag, const FHbkActionParam& InActionParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeStateReserve(int32 StateIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBeatPerformAttackBoss(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatPerformActionBoss(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnAbortAttackState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void OnAbortActionState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuppressActionFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitAttack() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetTargetLocationLinePrediction(float Velocity, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    FVector GetTargetLocationCirclePrediction(float Velocity, float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    FVector GetTargetActorPrevLocation(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkGameplayTask_BossQTE* GetQTETask() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetLinePrediction(const FVector& Position, const FVector& PrePosition, float Velocity, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkDamagePartsComponent* GetHbkDamageParts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkBossAttackInfoComponent* GetHbkBossAttackInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkBossAIController* GetHbkBossAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkBattleStateComponent* GetHbkBattleState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPhase() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCircumferenceTargetPosition(float AngleYawDeff, float Distance, bool& HitWall);
    
    UFUNCTION(BlueprintCallable)
    FVector GetCirclePrediction(const FVector& Position, const FVector& PrePosition, const FVector& PrePosition2, float Velocity, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    FVector GetAroundTargetPosition(float MinDistance, int32 Division);
    
    UFUNCTION(BlueprintCallable)
    void FinishDownDamage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ClearSelectedTag();
    
    UFUNCTION(BlueprintCallable)
    void ChangeHealthForDamage(float Value, float PrevValue, float ValueRate);
    
    UFUNCTION(BlueprintCallable)
    void CallOnPhaseStart();
    
    UFUNCTION(BlueprintCallable)
    void CallOnBattleStart();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 BossDropItemByTickets(const FTransform SpawnTransform, int32 TicketIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_WakeUpBoss();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformDownDamage(FGameplayTagContainer DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnChangePhase(int32 Phase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnAttackHit2(const FHbkEnemyAttackBasicInfo& attackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnAttackHit(const FHbkEnemyAttackInfo& attackInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_FinishDownDamage();
    

    // Fix for true pure virtual functions not being implemented
};

