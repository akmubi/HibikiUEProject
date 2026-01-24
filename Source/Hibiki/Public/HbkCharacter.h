#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "AttackInterface.h"
#include "CharaAttackDodgedDelegateDelegate.h"
#include "CharaAttackImpactDelegateDelegate.h"
#include "CharaAttackRepelledDelegateDelegate.h"
#include "CharaPerformDamageDelegateDelegate.h"
#include "CharaPostDiedDelegateDelegate.h"
#include "CharaSequencerDelegateDelegate.h"
#include "EHbkNote.h"
#include "EHbkSlowType.h"
#include "HbkReceiveAttackInterface.h"
#include "HbkCharacter.generated.h"

class AActor;
class AHbkAIController;
class UAkComponent;
class UHbkAnimInstance;
class UHbkBeatSignComponent;
class UHbkCharacterAnimInstance;
class UHbkCharacterMovementComponent;
class UHbkGameAgentComponent;
class UHbkRhythmSynchroComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkCharacter : public ACharacter, public IAttackInterface, public IHbkReceiveAttackInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaAttackImpactDelegate OnMomentAttackImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaPostDiedDelegate OnPostDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSequencerDelegate OnBeginPlaySequencer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaSequencerDelegate OnEndPlaySequencer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaPerformDamageDelegate OnDamage_Dead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaPerformDamageDelegate OnDamage_Alive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaPerformDamageDelegate OnDamage_Overkill;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaPerformDamageDelegate OnDamage_Common;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaAttackRepelledDelegate OnAttackRepelledDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaAttackRepelledDelegate OnAttackRepelledNoReactionDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaAttackDodgedDelegate OnAttackDodgedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBeatSignComponent* BeatSignComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustHeightConstantWhenSqBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdjustHeightConstantWhenSqBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFootIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlyingDurationEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowMeshKit(FName KitName, bool bShow, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowMaterialSectionBySlotName(FName materialSlotName, bool bShow, int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowDefaultMeshKit(int32 LODIndex);
    
    UFUNCTION(BlueprintCallable)
    void ShowCharacterBySequencer();
    
    UFUNCTION(BlueprintCallable)
    void ShowCharacter();
    
    UFUNCTION(BlueprintCallable)
    void SetSuperArmor(bool SuperArmor);
    
    UFUNCTION(BlueprintCallable)
    float SetSlowMotion(EHbkSlowType SlowType, EHbkNote DurationNote, int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    bool SetRepulsionParamByPreset(const FName PresetName);
    
    UFUNCTION(BlueprintCallable)
    void SetRepulsionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetParryEnabled(bool IsParryEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetKnockback(FVector KnockbackDir, float Knockback);
    
    UFUNCTION(BlueprintCallable)
    void SetInvincible(bool Invincible);
    
    UFUNCTION(BlueprintCallable)
    void SetInterpRotation(const FRotator& Rotator, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    void SetEasingInterpRotation(const FRotator& Rotator, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    void SetDamageFlightDuration(float Duration);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetInterpRotation(const FRotator& Rotator, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetGravityScale();
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetFlyingMovementMode(bool StopFlight);
    
    UFUNCTION(BlueprintCallable)
    void RemoveStateTags(const FGameplayTagContainer& RemoveTags);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveOnAttackImpact();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncPrepare();
    
    UFUNCTION(BlueprintCallable)
    void OnSyncAttackImpact(int32 NoteCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeathEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchHbkCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride, float NewGravityScale);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddHbkCharacterWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    void K2_AddHbkCharacterLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuperArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInvincible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFloating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDodging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlock() const;
    
    UFUNCTION(BlueprintCallable)
    void HideCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetStateTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkRhythmSynchroComponent* GetRhythmSynchro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkCharacterMovementComponent* GetHbkCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkCharacterAnimInstance* GetHbkCharaAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkAnimInstance* GetHbkAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkAIController* GetHbkAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetAkComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void EndPlaySequencer(float BlendSeconds, FName TargetBoneName);
    
    UFUNCTION(BlueprintCallable)
    void ClearStateTags();
    
    UFUNCTION(BlueprintCallable)
    void ClearSlowMotion();
    
    UFUNCTION(BlueprintCallable)
    void ChangeAnimState(const FName& Message);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ShowCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndPlaySequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnDodge(AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnDamageReactionEnd();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeginPlaySequencer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_HideCharacter();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginPlaySequencer(float BlendSeconds);
    
    UFUNCTION(BlueprintCallable)
    void AddStateTags(const FGameplayTagContainer& AddTags);
    

    // Fix for true pure virtual functions not being implemented
};

