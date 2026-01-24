#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHbkBeatHitType.h"
#include "EHbkPlayerAttackType.h"
#include "EHbkPlayerDirectionType.h"
#include "HbkCameraAppendParam.h"
#include "HbkCameraBlendParam.h"
#include "HbkCharacter.h"
#include "HbkDamageInterface.h"
#include "HbkGrapplingInterface.h"
#include "HbkInterpPositionInterface.h"
#include "HbkPlayerCharacterBase.generated.h"

class AActor;
class AController;
class AHbkPlayerController;
class AHbkPlayerWeapon;
class UAnimMontage;
class UAnimSequenceBase;
class UBoxComponent;
class UCapsuleComponent;
class UDamageType;
class UHbkAttackVariationComponent;
class UHbkBeatHitComponent;
class UHbkDamageComponent;
class UHbkEquipComponent;
class UHbkPlayerAnimFlagComponent;
class UHbkPlayerAnimInstance;
class UHbkPlayerCameraComponent;
class UHbkPlayerChargeComponent;
class UHbkPlayerCostumeComponent;
class UHbkPlayerDataAsset;
class UHbkPlayerEventAnimComponent;
class UHbkPlayerFocalPointComponent;
class UHbkPlayerFocusComponent;
class UHbkPlayerInvincibleComponent;
class UHbkPlayerMagnetComponent;
class UHbkPlayerMovementComponent;
class UHbkPlayerSpringArmComponent;
class USphereComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerCharacterBase : public AHbkCharacter, public IHbkGrapplingInterface, public IHbkInterpPositionInterface, public IHbkDamageInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponSlotName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerFocalPointComponent* CameraFocalPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerSpringArmComponent* CameraBoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAttackVariationComponent* AttackVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerFocusComponent* TargetFocusVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* FocusVolumeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* FocusVolumeSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBeatHitComponent* BeatHitComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEquipComponent* HbkEquip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* HbkDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerMagnetComponent* HbkMagnet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerInvincibleComponent* HbkPlayerInvincible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerChargeComponent* HbkChargeAttackComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerEventAnimComponent* HbkEventAnimComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerAnimFlagComponent* HbkAnimFlagComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerCostumeComponent* HbkCostumeComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* ParryCapsuleCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAzitoPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DodgeMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RhythmModeRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRateScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRateScaleAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OverReactionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> DefaultCollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JustTimingDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag JustTimingReverbTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddMashDamageUpScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MashDamageUpTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpecialAttackBHTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RhythmParryTriggerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpecialAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayerDataAsset* PlayerDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraAppendParam Jump1stAppendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraAppendParam Jump2ndAppendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraAppendParam Jump1stAppendParamInBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraAppendParam Jump2ndAppendParamInBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam Jump1stBlendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam Jump2ndBlendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam JumpBlendOutParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam JumpFocalPointBlendOutParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraAppendParam AirControlAppendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam AirControlBlendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraAppendParam ChargeY2ndAppendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam ChargeY2ndBlendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkCameraBlendParam ChargeY2ndBlendOutParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAutoCameraEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> JustTimingAttackHistory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* OverrideDamageAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* RhythmDodgeAnim;
    
public:
    AHbkPlayerCharacterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TeleportPosition(const FVector& Location, const FRotator& Rotation, bool bResetControlRotation, bool bResetPlayerState);
    
    UFUNCTION(BlueprintCallable)
    void StopWeaponAnim(float BlendOut);
    
    UFUNCTION(BlueprintCallable)
    int32 StartEventBeatHit(EHbkBeatHitType NewBeatHitType, FVector2D UIOffset, float UIScale);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponVisibility(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponAnimPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetInhibitControl(bool Inhibit);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RestartPosition(const FVector& Location, const FRotator& Rotation);
    
    UFUNCTION(BlueprintCallable)
    void RestartParamater();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetMovementMode();
    
    UFUNCTION(BlueprintCallable)
    void Receive_PostTakeDamage(float Damage, const FGameplayTagContainer& DamageTags, const UDamageType* DamageType, const FHitResult& Hit, const FVector& DamageImpulse, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void Receive_PostAttackDodge(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void Receive_PostAttackBlock(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnStopEventBeatHit(int32 BHId);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndedInterpPosition(bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnAllMontageInstancesEnded();
    
    UFUNCTION(BlueprintCallable)
    void Receive_ActorDied();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PerformRhythmParryStandUp(float PlayRate);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpAttackStart(EHbkPlayerAttackType SpAttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostAttackBlock_Other();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostAttackBlock();
    
    UFUNCTION(BlueprintCallable)
    void OnLanding(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnInAir();
    
    UFUNCTION(BlueprintCallable)
    void OnEndFlight();
    
    UFUNCTION(BlueprintCallable)
    void OnComboWaitEffect(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJustTimingAttack(const FGameplayTagContainer& AttackTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInhibitControl() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttacking(bool bUntilCombo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArmor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InCombat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkPlayerAnimInstance* GetPlayerAnimInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetJustTimingCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkPlayerMovementComponent* GetHbkPlayerMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkPlayerController* GetHbkController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkPlayerWeapon* GetEquipHbkWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCameraRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCameraPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraFieldOfView() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmCameraTargetLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmCameraSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArmCameraInterpSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetArmCameraFixedXY() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeGravityScale();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformSuccessExAction(bool bInAir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformRepelled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformPrepareBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* Blueprint_PerformPositionInterp(EHbkPlayerDirectionType Direction, bool bShortStep, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformMagnetRailDie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformMagnetRailDamage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformMagnetMoveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformMagnetMoveEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformMagnetHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformMagnet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformExtraParry(float PlayRate, UAnimSequenceBase* PlayerAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformExAction(bool bInAir);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformDodge(int32 DirectionFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformDie();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformDamage(const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformBattleBegan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformAttack(UAnimMontage* AttackAnimMontage, UAnimSequenceBase* WeaponAnim, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformAirDash();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnDodgeForRhythmParry();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnComboWait();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Blueprint_IsStagePlayer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_IsBlowoffDamage(const FGameplayTagContainer& DamageTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimSequenceBase* Blueprint_GetDamageAnimation(const FGameplayTagContainer& DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_DisablePlayerShadow(bool Disable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* Blueprint_BlendLandingPositionInterp(EHbkPlayerDirectionType Direction, bool bShortStep, float PlayRate, float BlendTime);
    

    // Fix for true pure virtual functions not being implemented
};

