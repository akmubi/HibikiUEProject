#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ArmFlamethrowerAreaDamageParma.h"
#include "BossSelectTagInterface.h"
#include "EEm7500DamageDodgingType.h"
#include "EEm7500MeshType.h"
#include "EEm7500RemoteState.h"
#include "EEm7500RhythmParryState.h"
#include "EHbkDifficultyType.h"
#include "EHbkEm7500FloatingLaserType.h"
#include "EHbkKaleShotFourCombiGroup.h"
#include "EHbkPartnerAttackType.h"
#include "EHbkPartnerType.h"
#include "EKaleActionVoiceType.h"
#include "EKaleHintTalkType.h"
#include "HbkBossCharacterBase.h"
#include "HbkComplexLaunchParam.h"
#include "HbkEm7500ArmAttackParam.h"
#include "HbkEm7500AttackTags.h"
#include "HbkEm7500CheckDistanceInfo.h"
#include "HbkEm7500FloatingLaserInfo.h"
#include "HbkEm7500MeshParam.h"
#include "HbkEm7500PhaseParameter.h"
#include "HbkEm7500PlayArmAnimInfo.h"
#include "HbkKaleDropItemData.h"
#include "HbkRhythmSynchroSignalCue.h"
#include "KaleArmKickbackPreAttackDelegateDelegate.h"
#include "KaleStateChangeDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkEm7500_Kale.generated.h"

class AActor;
class AController;
class AHbkEm7500_ArmBase;
class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class AHbkProjectile;
class UAkAudioEvent;
class UChildActorComponent;
class UCurveFloat;
class UDamageType;
class UDataTable;
class UHbkAttackNoticeComponent;
class UHbkBossAttackIntervalComponent;
class UHbkBossSelectTagComponent;
class UHbkComplexLauncherComponent;
class UHbkEm7500_AppealComponent;
class UHbkEm7500_FloatingLaserComponent;
class UHbkEm7500_ParryComponent;
class UHbkEm7500_PhaseParameterAsset;
class UHbkEnemyAttackNoticeComponent;
class UHbkEnemyGrapplingEventComponent;
class UHbkPlaySeByBeatComponent;
class UHbkRhythmSynchroSignalComponent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AHbkEm7500_Kale : public AHbkBossCharacterBase, public IBossSelectTagInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LongRangeAttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ShortRangeAttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PartnerReactionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500AttackTags AllAttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Const_UseParryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Const_UseParryIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Const_KaleStunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Const_KaleLaunchStunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkKaleDropItemData> DropItemDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEm7500_PhaseParameterAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PeppermintNormalDamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PeppermintCharge1DamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PeppermintCharge2DamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MacaronDamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KorsicaNormalDamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KorsicaChargeDamageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NoReductionDamageTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleStateChangeDelegate OnStartPhase0;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleStateChangeDelegate OnStartPhase1;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleStateChangeDelegate OnStartPhase2;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleStateChangeDelegate OnStartPhase3;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleStateChangeDelegate OnStartPhase4;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleStateChangeDelegate OnStartPhase5;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleStateChangeDelegate OnStartPhase6;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleStateChangeDelegate OnStartPhase7;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleStateChangeDelegate OnEndPhaseLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossAttackIntervalComponent* AttackIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossSelectTagComponent* BossSelectTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm7500_ParryComponent* ParryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkComplexLauncherComponent* ComplexLauncherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEnemyAttackNoticeComponent* EnemyAttackNoticeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAttackNoticeComponent* AttackNoticeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm7500_FloatingLaserComponent* FloatingLaserRequestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEnemyGrapplingEventComponent* GrapplingEventComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm7500_AppealComponent* AppealComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlaySeByBeatComponent* SeByBeatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FloatLaserNoticeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FloatLaserAttackParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FloatLaserAttackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FloatLaserPreAttackNoticeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FloatLaserPreAttackNoticeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FloatLaserPreAttackNoticeSound2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FloatLaserPreAttackNoticeSoundInstFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FloatLaserDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> FloatLaserDamageTypeP3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FloatLaserMoveSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FloatLaserShotFourCombiAttackSoundInstFx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShotFourCombiRhythmParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShotFourCombiRhythmSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShotFourCombiRhythmSoundInstFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ShotFourCombiNoticeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShotFourCombiNoticeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShotFourCombiNoticeSound2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ShotFourCombiRhythmDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> ShotFourCombiDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> ShotFourCombiDamageTypeP3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> EnergySwordGazerDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> EnergySwordGazerDamageTypeP3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChildActorComponent* ChildPartnerTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PartnerTargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkEm7500PlayArmAnimInfo> ArmWhipAnimInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHbkEm7500PlayArmAnimInfo> ArmGuardAnimInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> ArmKickbackDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmKickbackAttackOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArmKickbackAttackRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ArmKickbackPreAttackParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmKickbackPreAttackEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmKickbackPreAttackParticleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ArmKickbackPreAttackSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ArmKickbackParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmKickbackEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArmKickbackParticleScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ArmKickbackSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKaleArmKickbackPreAttackDelegate ArmKickbackPreAttack_Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ArmChargeShieldDurable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ArmSupportExecRateCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkDifficultyType, FHbkEm7500ArmAttackParam> ArmAttackParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FArmFlamethrowerAreaDamageParma ArmFlamethrowerAreaDamageParma;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> SuicideDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> BreakSArmLDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> BreakSArmRDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> BreakFArmDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> BreakBArmDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpenCoverMeshForPhase3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeppermintIntervalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MacaronIntervalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KorsicaIntervalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500FloatingLaserInfo DefaultFloatingLaserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FHbkEm7500FloatingLaserInfo> FloatingLaserInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MacaronGravityTakeDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StunActioningDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotStunActioningDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnbrokenArmDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EEm7500MeshType, FHbkEm7500MeshParam> MeshParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEm7500MeshType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSyncBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimTagToOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimTagToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketNameToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAttachTimeToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttachSweepToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketNameToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InAttachTimeToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FOVCurveNameToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PositionCorrectionDivisionNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PositionCorrectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> PositionCorrectionTraceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimpleRhythmAttackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRhythmAttackTransOnGrappling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionVoiceDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HintTalkDT;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableDebugDraw;
    
public:
    AHbkEm7500_Kale(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UpdateAttack_ArmSupport(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateAttack_ArmFlamethrower(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateAttack_ArmCharge(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateAttack_ArmBeam(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateAction_ArmGuard(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StartStunAction();
    
    UFUNCTION(BlueprintCallable)
    void StartRhythmParryBit();
    
    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnVFX(UParticleSystem* Particle, const FTransform& Transform);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupParameter(int32 StateIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SettingArmAndBit(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetStunActioning(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetStepHologramFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetShotFourCombiStunExecFlag(bool IsExec);
    
    UFUNCTION(BlueprintCallable)
    void SetRunningQTEFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetRhythmParryPhase3State(EEm7500RhythmParryState State);
    
    UFUNCTION(BlueprintCallable)
    void SetRhythmParryPhase1State(EEm7500RhythmParryState State);
    
    UFUNCTION(BlueprintCallable)
    void SetRepulsionUnmove(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetRemoteState(EEm7500RemoteState State);
    
    UFUNCTION(BlueprintCallable)
    void SetPartnerReactionExecFlag(bool IsExec);
    
    UFUNCTION(BlueprintCallable)
    void SetParryExecFlag(bool IsExec);
    
    UFUNCTION(BlueprintCallable)
    void SetParryEnableFlag(bool IsEnable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMeshType(EEm7500MeshType Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIsReceiveSignalMultiSlash(bool bFlag);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleState(bool IsAbortProjectile);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDebugDraw(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetContinuousStepFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBitActive(bool IsActive, bool IsDeactivateImmediate);
    
    UFUNCTION(BlueprintCallable)
    void SetArmTickAndVisible(bool IsEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetKaleStunTimerToLaunch();
    
    UFUNCTION(BlueprintCallable)
    void ResetHitAttackBlowOff();
    
    UFUNCTION(BlueprintCallable)
    void RequestFloatLaserForGameplayTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void RequestFloatLaser(const FHbkEm7500FloatingLaserInfo& Info, bool IsAdjustNextNote);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(UAkAudioEvent* AkEvent, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void PlayHintTalk(EKaleHintTalkType Type);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionVoice_SARMKickback();
    
    UFUNCTION(BlueprintCallable)
    void PlayActionVoice(EKaleActionVoiceType Type, bool IsForceStopPrevious);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToughValueChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnToughDeactive();
    
    UFUNCTION(BlueprintCallable)
    void OnStateChangeEvent(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnStartGameOverSequence();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSignalEvent(const FHbkRhythmSynchroSignalCue& SignalCue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnloadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchShotFourCombi(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageDodge(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnDamagedHealth(AActor* Causer, float Value, float PrevValue, float ValueRate);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageBlock(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePhaseEvent(int32 StateIndex);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginPartnerAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType AttackType);
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchShotFourCombi(EHbkKaleShotFourCombiGroup Group);
    
    UFUNCTION(BlueprintCallable)
    void LaunchFloatLaser(EHbkEm7500FloatingLaserType Type);
    
    UFUNCTION(BlueprintCallable)
    void LaunchArmWhip();
    
    UFUNCTION(BlueprintCallable)
    void LaunchArmSupport();
    
    UFUNCTION(BlueprintCallable)
    void LaunchArmGuard();
    
    UFUNCTION(BlueprintCallable)
    void LaunchArmFlamethrower();
    
    UFUNCTION(BlueprintCallable)
    void LaunchArmCharge();
    
    UFUNCTION(BlueprintCallable)
    void LaunchArmBeam();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingArmGuard();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingArmAnim(FName AnimSlotName);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPassedPartnerReactionInterval(EHbkPartnerType PartnerType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartnerDamageTag(FGameplayTagContainer DamageTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpenCoverMeshForPhase3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitAttackBlowOff() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsExecutingFloatLaser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDebugDraw() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBitActive();
    
    UFUNCTION(BlueprintCallable)
    bool IsArmReady();
    
    UFUNCTION(BlueprintCallable)
    void HealDamage(float HealValue);
    
    UFUNCTION(BlueprintCallable)
    AActor* GetSword();
    
    UFUNCTION(BlueprintCallable)
    float GetStunTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStunActioning() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetStepHologramFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShotFourCombiStunExecFlag() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetRunningQTEFlag();
    
    UFUNCTION(BlueprintCallable)
    EEm7500RhythmParryState GetRhythmParryPhase3State();
    
    UFUNCTION(BlueprintCallable)
    EEm7500RhythmParryState GetRhythmParryPhase1State();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm7500PhaseParameter GetPhaseParameter(int32 StateIndex) const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTagContainer GetPartnerReactionTags();
    
    UFUNCTION(BlueprintCallable)
    TMap<EHbkPartnerType, float> GetPartnerReactionIntervalParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPartnerReactionExecFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParryExecFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetParryEnableFlag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReceiveSignalMultiSlash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReadyMultiSlash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHitArmKickback() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDamageDodging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDamageBlocking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEm7500DamageDodgingType GetDamageDodgingType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm7500PhaseParameter GetCurrentPhaseParameter() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetContinuousStepFlag();
    
    UFUNCTION(BlueprintCallable)
    TArray<FHbkEm7500CheckDistanceInfo> GetCheckDistanceParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm7500_ArmBase* GetArm(const FName& SlotName) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AHbkEm7500_ArmBase*> GetAllArm();
    
    UFUNCTION(BlueprintCallable)
    void ForceImmediateDeactivateBit();
    
    UFUNCTION(BlueprintCallable)
    void EntryQTEEvent(FGameplayTag ExecMontageTag);
    
    UFUNCTION(BlueprintCallable)
    void EndRhythmParryBit();
    
    UFUNCTION(BlueprintCallable)
    void ClearHitArmKickback();
    
    UFUNCTION(BlueprintCallable)
    void ClearDamageDodging();
    
    UFUNCTION(BlueprintCallable)
    void ClearDamageBlocking();
    
    UFUNCTION(BlueprintCallable)
    void ClearBlock();
    
    UFUNCTION(BlueprintCallable)
    void ChangeCoverMesh(bool bOpen, bool bIsPhase3);
    
    UFUNCTION(BlueprintCallable)
    void CallStepPostEffect(bool IsStepStart);
    
    UFUNCTION(BlueprintCallable)
    void CallEndRhythmParry();
    
    UFUNCTION(BlueprintCallable)
    void CallEndQTE();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSuccessPhase3RhythmParry();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetupParameter(int32 StateIndex, const FHbkEm7500PhaseParameter& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnArmBreak(FName ArmSlotName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPartnerReactionInterval(EHbkPartnerType PartnerType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(const FHitResult& HitResult, TSubclassOf<UDamageType> DamageType);
    

    // Fix for true pure virtual functions not being implemented
};

