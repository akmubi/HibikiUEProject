#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EHbkPlayerCameraShakeType.h"
#include "EHbkPlayerControlFlagOption.h"
#include "EHbkPlayerControlMode.h"
#include "EHbkReverbGaugeConsumeType.h"
#include "HbkCameraAppendParam.h"
#include "HbkCameraBlendParam.h"
#include "HbkPlayerControllerBase.h"
#include "PlayerActionDelegateDelegate.h"
#include "PlayerAttackAnimStartDelegateDelegate.h"
#include "PlayerAttackHitDelegateDelegate.h"
#include "PlayerAttackInputDelegateDelegate.h"
#include "PlayerAutoActionStateChangeDelegateDelegate.h"
#include "PlayerBeatHitInputDelegateDelegate.h"
#include "PlayerBeatHitStartDelegateDelegate.h"
#include "PlayerChangeCameraDelegateDelegate.h"
#include "PlayerChangeControlModeDelegateDelegate.h"
#include "PlayerChangeHealthDelegateDelegate.h"
#include "PlayerChangeInhibitFlagDelegateDelegate.h"
#include "PlayerCreateLifeTankDelegateDelegate.h"
#include "PlayerDeadDelegateDelegate.h"
#include "PlayerGrowUpDelegateDelegate.h"
#include "PlayerInterpPositionDelegateDelegate.h"
#include "PlayerJustActionDelegateDelegate.h"
#include "PlayerLifeTankAccumulateDelegateDelegate.h"
#include "PlayerLifeTankAccumulatedDelegateDelegate.h"
#include "PlayerLifeTankConsumeDelegateDelegate.h"
#include "PlayerMagnetRailAnimDelegateDelegate.h"
#include "PlayerMagnetRailEndDelegateDelegate.h"
#include "PlayerMashInputDelegateDelegate.h"
#include "PlayerOverChargeConsumeDelegateDelegate.h"
#include "PlayerPassiveEffectDelegateDelegate.h"
#include "PlayerPassiveEffectDetailDelegateDelegate.h"
#include "PlayerReverbGaugeConsumeDelegateDelegate.h"
#include "PlayerReviveDelegateDelegate.h"
#include "PlayerRhythmActionDelegateDelegate.h"
#include "PlayerRhythmModeCountDelegateDelegate.h"
#include "PlayerSlotAnimDelegateDelegate.h"
#include "PlayerSpAttackSelectDelegateDelegate.h"
#include "PlayerSpAttackSetupDelegateDelegate.h"
#include "PlayerSpAttackUsableDelegateDelegate.h"
#include "PlayerTakeGrowthItemDelegateDelegate.h"
#include "PlayerTakeLifeTankItemDelegateDelegate.h"
#include "HbkPlayerController.generated.h"

class AActor;
class AController;
class AHbkPartnerCharacterBase;
class AHbkPlayerCharacterBase;
class AHbkPlayerState;
class UDamageType;
class UDataTable;
class UHbkDamageComponent;
class UHbkPartnerDataAsset;
class UHbkPlayerAutoActionComponent;
class UHbkPlayerEffectedComponent;
class UHbkPlayerGaugeComponent;
class UHbkPlayerGrowthComponent;
class UHbkPlayerInheritData;
class UHbkPlayerMetrics;
class UHbkPlayerMiniGameComponent;
class UHbkPlayerRDGrowthComponent;
class UHbkPlayerSoundComponent;
class UHbkPlayerSpecialAttackComponent;
class UHbkRhythmSynchroComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkPlayerController : public AHbkPlayerControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmModeStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmModeEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmModeCountDelegate OnRhythmJustTiming;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmJustTimingWithoutBH;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnRhythmNotJustTiming;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmModeCountDelegate OnRhythmAttackJustTiming;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmModeCountDelegate OnRhythmActionJustTiming;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBeatHitStartDelegate OnBeatHitChallengeStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnBeatHitSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnBeatHitGood;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnBeatHitPerfect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnBeatHitFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBeatHitInputDelegate OnBeatHitInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnSpBeatHitSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTakeGrowthItemDelegate OnTakeHealthGrowthItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTakeGrowthItemDelegate OnTakeGaugeGrowthItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGrowUpDelegate OnGrowUpHealth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerGrowUpDelegate OnGrowUpGauge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerTakeLifeTankItemDelegate OnTakeLifeTankItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCreateLifeTankDelegate OnCreateLifeTank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLifeTankAccumulateDelegate OnAccumulateLifeTanks;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLifeTankAccumulatedDelegate OnAccumulatedLifeTank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerLifeTankConsumeDelegate OnConsumeLifeTank;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnFirstTakeReverbGauge;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnAccumulateGauge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnTakeOverCharge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnTakeOverChargeStock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerReverbGaugeConsumeDelegate OnConsumeReverbGauge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerOverChargeConsumeDelegate OnConsumeOverCharge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnComboWait;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnParrySuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnAirParrySuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnDirectionalParrySuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnParryPerfect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnRhythmParryGood;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnRhythmParryPerfect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnRhythmParryFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnJustDodge;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnDamageConfirmed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnRhythmMiniGameLateFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnRhythmMiniGameEarlyFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerReviveDelegate OnPlayerRevive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDeadDelegate OnPlayerDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDeadDelegate OnPostPlayerDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDeadDelegate OnPlayerRestart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerDeadDelegate OnPlayerRespawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerReviveDelegate OnPlayerHealthZero;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChangeHealthDelegate OnHealthRecover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChangeHealthDelegate OnHealthDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnPlayerDying;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnRecoverDying;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChangeCameraDelegate OnCameraChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBeatHitStartDelegate OnEventBeatHitStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerBeatHitInputDelegate OnEventBeatHitSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnEventBeatHitFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerRhythmActionDelegate OnStartAttackState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAttackInputDelegate OnAttackInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerMashInputDelegate OnMashInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAttackAnimStartDelegate OnAttackAnimStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAttackHitDelegate OnAttackGaveDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnPartnerMiniGameInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnEventMoveEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnInterpMoveEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpAttackUsableDelegate OnReadySpecialAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpAttackUsableDelegate OnUnusableSpecialAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpAttackSelectDelegate OnSelectSpecialAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSpAttackSetupDelegate OnSetupSpecialAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnBeginSpAttackMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnEndSpAttackMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnAbortPriorityAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerJustActionDelegate OnJustAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInterpPositionDelegate OnEndedInterpPos;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnAllActionEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnDodgeStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnRhythmDodgeTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnDodgeCounter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnParryCounter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPassiveEffectDelegate OnBeginPassiveEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPassiveEffectDetailDelegate OnDecrementPassiveEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerPassiveEffectDelegate OnEndPassiveEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChangeControlModeDelegate OnChangeControlMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChangeControlModeDelegate OnResetControlMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChangeInhibitFlagDelegate OnChangeFlagPartnerAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerChangeInhibitFlagDelegate OnChangeFlagSpecialAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerAutoActionStateChangeDelegate OnAutoActionStateChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerActionDelegate OnMagnetRailStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSlotAnimDelegate OnMagnetRailAnimSwingL;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSlotAnimDelegate OnMagnetRailAnimSwingR;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSlotAnimDelegate OnMagnetRailAnimQTE;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSlotAnimDelegate OnMagnetRailAnimQTE_ForEnemy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerMagnetRailAnimDelegate OnMagnetRailAnimRailStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSlotAnimDelegate OnMagnetRailAnimRailEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSlotAnimDelegate OnMagnetRailAnimDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerSlotAnimDelegate OnMagnetRailAnimDie;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerMagnetRailEndDelegate OnMagnetRailEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* HbkDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerEffectedComponent* PlayerEffected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerGaugeComponent* PlayerGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerGrowthComponent* PlayerGrowth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerSpecialAttackComponent* PlayerSpecialAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerAutoActionComponent* PlayerAutoAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerMiniGameComponent* HbkMiniGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerSoundComponent* PlayerSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerRDGrowthComponent* PlayerRDGrowth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CameraParamDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPartnerDataAsset* PartnerDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPlayerMetrics* PlayerMetrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkPlayerInheritData* PlayerInheritData;
    
public:
    AHbkPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SuspendCameraAutoLockon();
    
    UFUNCTION(BlueprintCallable)
    void StartInterpPos(const FTransform& Goal, bool OverrideAction);
    
    UFUNCTION(BlueprintCallable)
    void StartInterpMove(const FTransform& Goal, float InterpTime, bool SetInputVector, bool StopSlotAnim, bool bGroundCheck);
    
    UFUNCTION(BlueprintCallable)
    void StartEventMove(const FTransform& Goal, float moveSpeed, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    void StartEventAnimation(const FGameplayTag EventAnimTag);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerControlMode(EHbkPlayerControlMode NewControlMode);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientRotationToDir(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetInhibitFlag(EHbkPlayerControlFlagOption FlagOption);
    
    UFUNCTION(BlueprintCallable)
    void SetInhibitControl(bool Inhibit);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLastHit(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetControlSecondAttackOnly(bool Inhibit);
    
    UFUNCTION(BlueprintCallable)
    void SetControlNormalAttackOnly(bool Inhibit);
    
    UFUNCTION(BlueprintCallable)
    void SetControlInteractOnly(bool Inhibit);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraWorldRotationParam(const FRotator& TargetRot, float Duration, float BlendIn, bool InterpYaw, bool InterpPitch, bool ForceRot);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraRotationParam(const FRotator& TargetRot, float Duration, float BlendIn, bool InterpYaw, bool InterpPitch);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoActionPriorityTarget(AActor* PriorityTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetAppendCameraParam(FHbkCameraAppendParam AppendParam, FHbkCameraBlendParam BlendIn, FHbkCameraBlendParam BlendOut, float Duration, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void ResumeCameraAutoLockon();
    
    UFUNCTION(BlueprintCallable)
    void ResetPreviousCamera(float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerControlMode();
    
    UFUNCTION(BlueprintCallable)
    void ResetDefaultCamera(float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void ResetCurrentHealth(float HealthRate);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraRotation(float BlendIn, bool InterpYaw, bool InterpPitch);
    
    UFUNCTION(BlueprintCallable)
    void RecoverReverbGauge(int32 GaugeCount, float RecoverRate);
    
    UFUNCTION(BlueprintCallable)
    bool RecoverHealthWithTag(const FGameplayTag& RecoveryTag, bool bTakeItem);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnReturnedPartner(AHbkPartnerCharacterBase* ReturnedPartner, bool bIsAction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndBattle();
    
public:
    UFUNCTION(BlueprintCallable)
    void Receive_OnCalledPartner(AHbkPartnerCharacterBase* CalledPartner, bool bIsAction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnCalledBeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnBeginBattle();
    
    UFUNCTION(BlueprintCallable)
    void Receive_ChangeHealth(float Value, float PrevValue, float ValueRate);
    
    UFUNCTION(BlueprintCallable)
    void Receive_ActorDied(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncPrepare();
    
    UFUNCTION(BlueprintCallable)
    void OnStartInterpPos();
    
    UFUNCTION(BlueprintCallable)
    void OnInterpPosEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnInterpMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnEventMoveEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraParamTableChange();
    
public:
    UFUNCTION(BlueprintCallable)
    void JumpSectionEventAnimation(const FGameplayTag EventAnimTag, FName JumpSectionName, bool bAnimBlend);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsableSpecialAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerControlMode(EHbkPlayerControlMode NewControlMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOtherPlayerControlMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInhibitControl() const;
    
    UFUNCTION(BlueprintCallable)
    void Hbk_StopPlayerCameraShake(EHbkPlayerCameraShakeType CameraShakeType);
    
    UFUNCTION(BlueprintCallable)
    void Hbk_StartPlayerCameraShake(EHbkPlayerCameraShakeType CameraShakeType, float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpecialAttackCost(const FGameplayTag& SpAttackTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpecialAttackConsumeGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkRhythmSynchroComponent* GetRhythmSynchro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkPlayerMetrics* GetPlayerMetrics();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkPlayerControlMode GetPlayerControlMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkPlayerState* GetHbkPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkPlayerCharacterBase* GetHbkPlayerCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentReverbGaugeMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConsumeReverbGauge(EHbkReverbGaugeConsumeType ConsumeType) const;
    
    UFUNCTION(BlueprintCallable)
    void EndLoopEventAnimation();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DebugChangeMainCamera(const TArray<FString>& Args);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearInhibitFlag(EHbkPlayerControlFlagOption FlagOption);
    
    UFUNCTION(BlueprintCallable)
    void ClearAutoActionPriorityTarget(AActor* ClearTarget);
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraParam(FName CameraName, float BlendTime, bool bDisableFocalPointTrace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddOverChargeCount() const;
    
    UFUNCTION(BlueprintCallable)
    FVector2D CalcScreenLocationFromCenter(const FVector2D& ScreenLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float Blueprint_SetHitSlow(const FGameplayTagContainer DamageTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetDamageShake(const FGameplayTagContainer DamageTags);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnEndBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBeginBattle();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnAttackHit(float Damage, bool IsDead, const FGameplayTagContainer DamageTags, const FGameplayTagContainer AttackTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FName Blueprint_GetHitImpactName(const FGameplayTagContainer DamageTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_BattleFinishAttack();
    
    UFUNCTION(BlueprintCallable)
    bool AddOverChargeStockMax();
    
    UFUNCTION(BlueprintCallable)
    bool AddOverChargeCount();
    
    UFUNCTION(BlueprintCallable)
    void AccumulateReverbGaugeWithTag(const FGameplayTag& RecoveryTag, bool bTakeItem);
    
};

