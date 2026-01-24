#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BossActionDelegateDelegate.h"
#include "BossSelectTagInterface.h"
#include "EHbkEm5000ActionVoiceType.h"
#include "EHbkEm5000ConfrontBehavior.h"
#include "EHbkEm5000HintTalkType.h"
#include "EHbkEm5000SpectrumInfoType.h"
#include "EHbkEm5000Style.h"
#include "EHbkEm5000ToughType.h"
#include "EHbkNote.h"
#include "Em5000SetStyleDelegateDelegate.h"
#include "HbkAltitudeControlParam.h"
#include "HbkBossCharacterBase.h"
#include "HbkComplexLaunchParam.h"
#include "HbkEm5000AvoidanceParam.h"
#include "HbkEm5000BeatSpectrumInfo.h"
#include "HbkEm5000NoteTime.h"
#include "HbkEm5000PerfectGuardParticle.h"
#include "HbkEm5000PhaseParameter.h"
#include "HbkMultipleToughParam.h"
#include "Templates/SubclassOf.h"
#include "HbkEm5000_Mimosa.generated.h"

class AActor;
class AHbkProjectile;
class UAkAudioEvent;
class UDamageType;
class UDataTable;
class UHbkAltitudeControlComponent;
class UHbkAttackNoticeComponent;
class UHbkBossAttackIntervalComponent;
class UHbkBossBeChasedComponent;
class UHbkBossSelectTagComponent;
class UHbkButtonWidgetComponent;
class UHbkComplexLauncherComponent;
class UHbkDecalPastingComponent;
class UHbkEnemyAttackNoticeComponent;
class UHbkEqualizerWingAttackComponent;
class UHbkEquipComponent;
class UHbkFHbkEm5000ParameterAsset;
class UHbkMultipleToughComponent;
class UHbkRhythmSynchroSignalComponent;
class UHbkShowNewTutorialTask;
class UHbkSpectrumInfoComponent;
class UHbkTutorialDataObject_ButtonType;
class UMaterialInstanceDynamic;
class UParticleSystem;
class UParticleSystemComponent;
class USceneComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm5000_Mimosa : public AHbkBossCharacterBase, public IBossSelectTagInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase0;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase1;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase2;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase3;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase4;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase5;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase6;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase7;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase8;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnEndPhaseLast;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm5000SetStyleDelegate OnChangeStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000Style Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkFHbkEm5000ParameterAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FRotator> OffsetRotateOfProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> OffsetLocationOfProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceForJamCombo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableDamageFlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPerfectGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator GuardLocalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisablePerfectGuardCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisablePerfectGuard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableAdditiveToughDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisableForceDamageRecover;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsImmediatelyAfterToughBreak;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisablePerfectGuardRecoverCallOnlyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RestOfGuardState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisableDownAdditionRecoveryTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000AvoidanceParam AvoidanceParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceCoolTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRecoverAdjustAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FallAttackTag_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallHeight_ByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkAltitudeControlParam FallHeightParam_ByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WingPanelLSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WingPanelRSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CatchPanelSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInstanceDynamic> WingPanelLDM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInstanceDynamic> WingPanelRDM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMaterialInstanceDynamic> CatchPanelDM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm5000SpectrumInfoType SpectrumInfoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000BeatSpectrumInfo> SpectrumInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SpectrumOptionalNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpectrumScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm5000PerfectGuardParticle> PerfectGuardParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PerfectGuardBreakParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* PerfectGuardRecoverParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> PerfectGuardObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> PerfectGuardBreakObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UParticleSystemComponent> PerfectGuardRecoverObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_ButtonType> RhythmParryRepelledInputUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkShowNewTutorialTask> ShowParryInputTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TechniqueWaveParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttackTagOnTheGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AttackTagInTheAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionVoiceDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HintTalkDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote Phase1StartHintTalkDelayNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase1StartHintTalkDelayNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase1StartHintTalkDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote RecoveryFromDownStateHintTalkDelayNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryFromDownStateHintTalkDelayNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryFromDownStateHintTalkDelayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PerfectGuardSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkMultipleToughComponent* MultipleToughComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEqualizerWingAttackComponent* EqualizerWingAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEquipComponent* EquipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkComplexLauncherComponent* ComplexLauncherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossAttackIntervalComponent* AttackIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossSelectTagComponent* BossSelectTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossBeChasedComponent* BossBeChasedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidgetComponent* ButtonWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDecalPastingComponent* DecalPastingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAltitudeControlComponent* AltitudeControlComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEnemyAttackNoticeComponent* EnemyAttackNoticeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkAttackNoticeComponent* AttackNoticeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSpectrumInfoComponent* SpectrumInfoComponent;
    
public:
    AHbkEm5000_Mimosa(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateBeatSpectrum(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void TestForceActiveDamageState();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchToughNotifyDamage(EHbkEm5000ToughType Type);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSBFMirrorBall();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SpawnPerfectGuardRecoverParticle();
    
    UFUNCTION(BlueprintCallable)
    void SpawnPerfectGuardParticle(const AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPerfectGuardBreakParticle(const AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable)
    void SkipShowParryInput();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleButtonWidget(bool visible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupPerfectGuard(const AActor* Attacker, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void SetupParameter(int32 StateIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStyle(EHbkEm5000Style InStyle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRestrictTagOnTheGround(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictTagInTheAir(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetReserveTagOnTheGround(int32 Count, int32 Priority, bool IsRemain);
    
    UFUNCTION(BlueprintCallable)
    void SetReserveTagInTheAir(int32 Count, int32 Priority, bool IsRemain);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIdleStateForInTheDark();
    
    UFUNCTION(BlueprintCallable)
    void SetIdleState(bool IsCancelDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableToughNotifyDamage(EHbkEm5000ToughType Type, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisablePerfectGuradCounter(bool bIsDisable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetConfrontBehaviorForBB(EHbkEm5000ConfrontBehavior BehaviorType);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetCoolTimeAvoidance();
    
    UFUNCTION(BlueprintCallable)
    bool RequestAvoidance(const FVector& AttackTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void PlayHintTalk(EHbkEm5000HintTalkType Type);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionVoice(EHbkEm5000ActionVoiceType Type, bool IsForceStopPrevious);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool PerfectGuardRequest(const AActor* Attacker, const UDamageType* DamageType);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTriggerHitSideStory();
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerHitEqualizerWave();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnToughTakeDamage(int32 Index, AActor* DamageCauser, const UDamageType* InDamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnToughDeactive(int32 Index, const FHbkMultipleToughParam& Param, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnToughActiveRecovered(int32 Index, const FHbkMultipleToughParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnToughActive(int32 Index, const FHbkMultipleToughParam& Param);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTechniqueWaveVFX();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateChangeEvent(int32 StateIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSideStoryAdjustLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnSideStoryActionStart();
    
    UFUNCTION(BlueprintCallable)
    void OnShieldLaunch();
    
    UFUNCTION(BlueprintCallable)
    void OnShieldEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmTowerBattleEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayNotifyVFX();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLaunchProjectile(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnEqualizerWaveAdjustLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnEqualizerWaveActionStart();
    
    UFUNCTION(BlueprintCallable)
    void OnEndNoDamageJudgeArea();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDamageGuard(const AActor* Blocker, const AActor* Attacker, const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePhaseEvent(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnAltitudeControlEnd(float Altitude, int32 Priority);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableToughNotifyDamage(EHbkEm5000ToughType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableMultiTough(EHbkEm5000ToughType Type) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool IsAttackTagOnTheGround(const FGameplayTag& InAttackTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm5000Style GetStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm5000PhaseParameter GetPhaseParameter(int32 StateIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm5000NoteTime GetOpportunityForAttackFlamencoDance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkEqualizerWingAttackComponent* GetEqualizerWingAttackComp() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    FRotator GetDamageDirection(const AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm5000PhaseParameter GetCurrentPhaseParameter() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndPerfectGuard();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetupParameter(int32 StateIndex, const FHbkEm5000PhaseParameter& Param);
    

    // Fix for true pure virtual functions not being implemented
};

