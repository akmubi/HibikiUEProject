#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CharaAttackImpactDelegateDelegate.h"
#include "EEnemyUpdateState.h"
#include "EHbkBeatHitInputResult.h"
#include "EHbkBeatHitType.h"
#include "EHbkEnemyCategoryType.h"
#include "EHbkHologramCharaPostActivateGroup.h"
#include "EmAbortStateDelegateDelegate.h"
#include "EmBeginStateDelegateDelegate.h"
#include "EmEndStateDelegateDelegate.h"
#include "EnemyAimParam.h"
#include "EnemyCharaPostDestroyDelegateDelegate.h"
#include "EnemyStateInfo.h"
#include "GrapplingDelegateDelegate.h"
#include "HbkActionParam.h"
#include "HbkAutoActionInterface.h"
#include "HbkCharacter.h"
#include "HbkDamageInterface.h"
#include "HbkDamageParam.h"
#include "HbkEnemyAttackAnimInfo.h"
#include "HbkEnemyAttackInfo.h"
#include "HbkEnemyAttackParam.h"
#include "HbkGrapplingInfo.h"
#include "HbkGrapplingInterface.h"
#include "HbkMagnetInterface.h"
#include "HbkMultiItemTickets.h"
#include "Templates/SubclassOf.h"
#include "HbkEnemyCharacter.generated.h"

class AActor;
class AController;
class AHbkEnemyAIController;
class AHbkPlayerCharacterBase;
class UAkAudioEvent;
class UAnimMontage;
class UAnimSequenceBase;
class UDamageType;
class UDataTable;
class UHbkActionParamComponent;
class UHbkBarrierComponent;
class UHbkDamageComponent;
class UHbkEnemyAnimInstance;
class UHbkEnemyAssistAttackComponent;
class UHbkEnemyAttackInfoComponent;
class UHbkEnemyDamageReaction;
class UHbkEnemyHealthBarWidget;
class UHbkEnemyMovementComponent;
class UHbkEnemyVisualizeStateComponent;
class UHbkItemObject;
class UHbkMagneticPointComponent;
class UHbkStunGaugeWidget;
class UHbkToughComponent;
class UParticleSystem;
class UParticleSystemComponent;
class UTngDamageType;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEnemyCharacter : public AHbkCharacter, public IHbkDamageInterface, public IHbkGrapplingInterface, public IHbkMagnetInterface, public IHbkAutoActionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaAttackImpactDelegate OnEnemyAttackImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmBeginStateDelegate OnBeginActionState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmBeginStateDelegate OnBeginAttackState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmBeginStateDelegate OnBeginDamageState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmEndStateDelegate OnEndActionState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmEndStateDelegate OnEndAttackState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmEndStateDelegate OnEndDamageState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmEndStateDelegate OnParryCompleted_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmAbortStateDelegate OnAbortActionState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmAbortStateDelegate OnAbortAttackState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmAbortStateDelegate OnAbortDamageState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrapplingDelegate OnAcceptedGrappling_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrapplingDelegate OnBeginGrappling_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrapplingDelegate OnEndGrappling_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrapplingDelegate OnAbortGrappling_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyCharaPostDestroyDelegate OnPostEnemyDestroy_Delegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkActionParamComponent* ActionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* HbkDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkToughComponent* HbkToughComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkMagneticPointComponent* HbkMagneticPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBarrierComponent* HbkBarrierComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEnemyVisualizeStateComponent* VisualizeStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEnemyAssistAttackComponent* HbkAssistAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHitSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* OnBeatAttackMontageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GraceTimeUntileActionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GraceTimeUntileAttackState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ShownCharacter, meta=(AllowPrivateAccess=true))
    bool bShownCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* HologramAppearVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HologramAppearSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EnemyTypeIdTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEnemyCategoryType TrainingRoomKillEnemyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewHealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimSequenceBase> DamageReactionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHbkEnemyDamageReaction*> DamageReactionListAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> AdditiveDamageAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FilteringIndividualDamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverRotateDamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DeadEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* PlayingDeadEffectPSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketNameByExpVfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> DeadExplosionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pDeadExplosionEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> DeadExplosionHomerunEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* pDeadExplosionHomerunEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HomerunDamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SheerHeartAttackDamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketNameByExpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AkEventDeadExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pAkEventDeadExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> AkEventDeadExplosionHomerun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pAkEventDeadExplosionHomerun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToughDamageByRepelled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionalyRepelledDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindedToughDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindDamageTimeByNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SheerHeartVFXAttachedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> wpSheerHeartA_PSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> wpSheerHeartB_PSC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> SheerHeartA_VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* SheerHeartA_VFX_PS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> SheerHeartB_VFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* SheerHeartB_VFX_PS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> SheerHeartLoopSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pSheerHeartLoopSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> SheerHeartStopSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pSheerHeartStopSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets DropItemTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets TicketsBySteelCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets TicketsByDamaged_Easy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkMultiItemTickets TicketsByDamaged_Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLateDeadCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAlreadyDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsDeadNotified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSelfDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> BHCollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FEnemyAimParam AimParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsJamComboAttackInAttachWithSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RhythmTowerAddTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCleanDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pAkEm0570DrainLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pAkEm0570DrainEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* psDrainVFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> BattleTipsTalkTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AssistExclusionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkStunGaugeWidget> StunGaugeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkEnemyHealthBarWidget> HealthBarWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector SpawnedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFallLimitCheckEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> LoadAssetsPathArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FText UserName;
    
public:
    AHbkEnemyCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateDamageState(float DeltaTime, EEnemyUpdateState& ResultExec);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttackState(float DeltaTime, EEnemyUpdateState& ResultExec);
    
    UFUNCTION(BlueprintCallable)
    void UpdateActionState(float DeltaTime, EEnemyUpdateState& ResultExec);
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowWeaponBySequencer();
    
    UFUNCTION(BlueprintCallable)
    void SetWindStunState(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityToughGauge(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibilityHealthBar(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetSelfDestructionFlag(bool isSelfDestruction);
    
    UFUNCTION(BlueprintCallable)
    void SetRhythmDodgeTutorial(bool TutorialEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRhythmAttackTutorial(bool TutorialEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetOnLandState(bool IsBound);
    
    UFUNCTION(BlueprintCallable)
    void SetInvincibleFromChaiWithTimer(bool IsInvincible, float StopTimer);
    
    UFUNCTION(BlueprintCallable)
    void SetInvincibleFromChai(bool IsInvincible);
    
    UFUNCTION(BlueprintCallable)
    void SetInitializedFlag(bool NewIsInitialized);
    
    UFUNCTION(BlueprintCallable)
    void SetHologramActivateGroup(const EHbkHologramCharaPostActivateGroup HologramGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetDownState(bool Enable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetDownPosition(const FVector& Pos);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAutoActionRejectMagnet(bool bNewRejectMagnet);
    
    UFUNCTION(BlueprintCallable)
    void RestartAILogic();
    
    UFUNCTION(BlueprintCallable)
    void ResetMovementMode();
    
    UFUNCTION(BlueprintCallable)
    void RemoveHealthBar();
    
    UFUNCTION(BlueprintCallable)
    void RemoveDamageReactionAssetByAssetName(const UHbkEnemyDamageReaction* Asset);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveDamageReactionAsset(int32 AssetIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAssistExclusionTag(const FGameplayTag ExclusionTag);
    
    UFUNCTION(BlueprintCallable)
    void Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_PostAttackBlock(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnToughDeactivated();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndSpecialAttack();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndJamComboAttack();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndJamCombo();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndGrappling(const FHbkGrapplingInfo& GrapplingInfo);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginSpecialAttack(bool bIncludingCamera);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginJamComboAttack();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginJamCombo();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginGrappling(const FHbkGrapplingInfo& GrapplingInfo);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeatHitStart(int32 BeatHitId, EHbkBeatHitType BeatHitType, float PlayRate, FVector2D Offset, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeatHitResult(int32 BeatHitId, EHbkBeatHitInputResult InputResult);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAcceptedGrappling(const FHbkGrapplingInfo& GrapplingInfo);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAbortGrappling(const FHbkGrapplingInfo& GrapplingInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void PreIdleToReadyFight();
    
    UFUNCTION(BlueprintCallable)
    void PerformRhythmDodge();
    
    UFUNCTION(BlueprintCallable)
    void PerformRhythmAttack();
    
    UFUNCTION(BlueprintCallable)
    void PerformDamageFromTags(const FGameplayTagContainer& DamageTags, const FHbkDamageParam DamageParam);
    
    UFUNCTION(BlueprintCallable)
    void PerformDamageFromAnimation(UAnimSequenceBase* Animation, const FHbkDamageParam DamageParam);
    
    UFUNCTION(BlueprintCallable)
    void PerformDamage(const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable)
    void PerformAttackFromAnimation(UAnimSequenceBase* Animation, const FHbkEnemyAttackParam AttackParam);
    
    UFUNCTION(BlueprintCallable)
    void PerformAttack3(const FGameplayTag AttackTag, const FHbkEnemyAttackParam AttackParam);
    
    UFUNCTION(BlueprintCallable)
    void PerformAssistAttack(const FGameplayTag AttackTag, const FHbkEnemyAttackParam AttackParam);
    
    UFUNCTION(BlueprintCallable)
    void PerformActionFromAnimation(UAnimSequenceBase* Animation, const FHbkActionParam NewActionParam);
    
    UFUNCTION(BlueprintCallable)
    void PerformAction(const FGameplayTag ActionTag, const FHbkActionParam NewActionParam);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncOnceBeatStartRhythmDodge(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncOnceBeatStartRhythmAttack(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnStartGameoverSequencer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ShownCharacter();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMagnetRelease(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetReached(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetHit(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint);
    
    UFUNCTION(BlueprintCallable)
    void OnMagnetBackStab(AHbkPlayerCharacterBase* Player, UHbkMagneticPointComponent* MagneticPoint);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLanding(const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnBeatPerformAttack(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatPerformAction(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void OnAttack2(const FHbkEnemyAttackAnimInfo& AnimInfo, FHbkEnemyAttackParam AttackParam);
    
    UFUNCTION(BlueprintCallable)
    void OnAttack(const FHbkEnemyAttackInfo& attackInfo, FHbkEnemyAttackParam AttackParam);
    
    UFUNCTION(BlueprintCallable)
    void OnActivate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWindStunState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRhythmDodgeTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRhythmAttackTutorial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverkillState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJamComboState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized();
    
    UFUNCTION(BlueprintCallable)
    bool IsInCameraView(const float ThresholdValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDownState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugDisabledAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamagedSpecialAttack() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamagedJamComboAttack() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVisibilityToughGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVisibilityHealthBar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkToughComponent* GetToughComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEnemyStateInfo GetStateInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkEnemyAnimInstance* GetHbkEnemyAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEnemyAIController* GetHbkEnemyAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEnemyTypeTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkEnemyMovementComponent* GetEnemyMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkDamageComponent* GetDamageComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkEnemyAttackInfoComponent* GetAttackInfoComp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkActionParamComponent* GetActionParamComp() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceToughDisable();
    
    UFUNCTION(BlueprintCallable)
    void ForceShieldDisable();
    
    UFUNCTION(BlueprintCallable)
    void ForceBarrierDisable(bool bIncrementMetrics);
    
protected:
    UFUNCTION(BlueprintCallable)
    void EventPostDied();
    
public:
    UFUNCTION(BlueprintCallable)
    int32 DropItemByTickets(const FTransform SpawnTransform);
    
    UFUNCTION(BlueprintCallable)
    void DropItemBySpecialAtkHelp(float DropRate, TSubclassOf<UHbkItemObject> DropItemClass);
    
    UFUNCTION(BlueprintCallable)
    void DropItembyDamaged(AActor* DamageCauser, float Value, float PreValue, float HealthRate);
    
    UFUNCTION(BlueprintCallable)
    UHbkEnemyHealthBarWidget* CreateHealthBar();
    
    UFUNCTION(BlueprintCallable)
    void ClearOldDamageParam();
    
    UFUNCTION(BlueprintCallable)
    void CleanDestroy();
    
    UFUNCTION(BlueprintCallable)
    void CancelDamageState(bool StopLogic);
    
    UFUNCTION(BlueprintCallable)
    void CancelAttackState(bool StopLogic, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void CancelAllState(bool StopLogic);
    
    UFUNCTION(BlueprintCallable)
    void CancelActionState(bool StopLogic);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallParryCompleted();
    
    UFUNCTION(BlueprintCallable)
    float CalcWindStunTime(const float NoteTime, const UTngDamageType* TngDamageType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SendDamageToActionParam(const FGameplayTagContainer& DamageTags, bool IsDied);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformDamage(const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformAttack2(const FHbkEnemyAttackAnimInfo& AnimInfo, const FHbkEnemyAttackParam& AttackParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformAttack(const FHbkEnemyAttackInfo& attackInfo, const FHbkEnemyAttackParam& AttackParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPostDamageReaction(const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPostDamageNoReaction(const FGameplayTagContainer& DamageTags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_OnEndGrabbed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnDynamicSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnCounterByDamage(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_ExecuteReaction(const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_ExecuteDamageShield(const FGameplayTagContainer& InDamageTags, FGameplayTagContainer& OutDamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_ExecuteDamageArmor(const FGameplayTagContainer& InDamageTags, FGameplayTagContainer& OutDamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_ExecuteAdditionalEffect(const FGameplayTagContainer& DamageTags);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_EventPostDied();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAssistExclusionTag(const FGameplayTag ExclusionTag);
    

    // Fix for true pure virtual functions not being implemented
};

