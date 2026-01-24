#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BossActionDelegateDelegate.h"
#include "BossSelectTagInterface.h"
#include "EHbkBossCommandBattleResult.h"
#include "EHbkDifficultyType.h"
#include "EHbkEm6000_ActionVoiceType.h"
#include "EHbkEm6000_BodyMeshType.h"
#include "EHbkEm6000_HintTalkType.h"
#include "Em6000_TransformedDelegateDelegate.h"
#include "HbkBossCharacterBase.h"
#include "HbkComplexLaunchParam.h"
#include "HbkEm6000_DropItemData.h"
#include "HbkEm6000_PhaseFixedParameter.h"
#include "HbkEm6000_PhaseParameter.h"
#include "Templates/SubclassOf.h"
#include "HbkEm6000_Roquefort.generated.h"

class AHbkProjectile;
class UAkAudioEvent;
class UAkComponent;
class UAnimMontage;
class UDamageType;
class UDataTable;
class UHbkBarrierComponent;
class UHbkBossAttackIntervalComponent;
class UHbkBossBeChasedComponent;
class UHbkBossSelectTagComponent;
class UHbkCoinBlockerComponent;
class UHbkComplexLauncherComponent;
class UHbkEm6000_BehaviorPhase2Component;
class UHbkEm6000_BehaviorPhase4Component;
class UHbkEm6000_BodyMeshInfoAsset;
class UHbkEm6000_DirectAttackComponent;
class UHbkEm6000_GuardComponent;
class UHbkEm6000_PartsInfoAsset;
class UHbkEm6000_ShieldComponent;
class UHbkEnemyDamageReaction;
class UHbkEquipComponent;
class UHbkFHbkEm6000_ParameterAsset;
class UHbkFaceShadowComponent;
class UHbkPartnerAppearPointComponent;
class UHbkPartnerTargetPointComponent;
class UHbkPlayerMovePointComponent;
class UHbkReceiveBeyondDamageComponent;
class UHbkRhythmSynchroSignalComponent;

UCLASS(Blueprintable)
class AHbkEm6000_Roquefort : public AHbkBossCharacterBase, public IBossSelectTagInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartIntro;
    
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
    FBossActionDelegate OnStartOutro;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_TransformedDelegate OnTransformed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEquipComponent* EquipComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroSignalComponent* RhythmSynchroSignalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossAttackIntervalComponent* AttackIntervalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossBeChasedComponent* BossBeChasedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossSelectTagComponent* BossSelectTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkReceiveBeyondDamageComponent* ReceiveBeyondDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkComplexLauncherComponent* ComplexLauncherComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBarrierComponent* BarrierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm6000_ShieldComponent* ShieldComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm6000_GuardComponent* GuardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm6000_DirectAttackComponent* DirectAttackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCoinBlockerComponent* CoinBlockerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPartnerTargetPointComponent* PartnerTargetPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPartnerAppearPointComponent* PartnerAppearPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerMovePointComponent* PlayerMovePointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkFaceShadowComponent* FaceShadowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm6000_BehaviorPhase2Component* BehaviorPhase2Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm6000_BehaviorPhase4Component* BehaviorPhase4Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkFHbkEm6000_ParameterAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEm6000_PartsInfoAsset* PartsInfoAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEm6000_BodyMeshInfoAsset* BodyMeshInfoAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm6000_BodyMeshType CurrentBodyMeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UHbkEnemyDamageReaction*> DamageReactionListAssetsBackup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> NotSupportedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> NotCancelInvincibleTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AdjustAnyAttackDataTableHuman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AdjustAnyAttackDataTableWolf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> NotReceiveSignalAttackTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> FirstPhaseHealthRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> SecondPhaseHealthRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> MinimumPhaseHealthRates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StepActionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionVoiceDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HintTalkDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm6000_DropItemData> DropItemDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StickSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DirectAttackTriggerDamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DirectAttackDamageTypeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransformHumanAnimEm6100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransformHumanAnimEm6400;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransformHumanAnimEm6001;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransformWolfAnimEm6100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransformWolfAnimEm6400;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransformWolfAnimEm6001;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkComponent*> AkComponentList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> AudioEventList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnableDebugDraw;
    
public:
    AHbkEm6000_Roquefort(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TransformWolf(bool bIsImmediately);
    
    UFUNCTION(BlueprintCallable)
    void TransformHuman(bool bIsImmediately);
    
    UFUNCTION(BlueprintCallable)
    void TestChangeWolf();
    
    UFUNCTION(BlueprintCallable)
    void TestChangeHuman();
    
    UFUNCTION(BlueprintCallable)
    void SuccessCommandBattleForPhase6();
    
    UFUNCTION(BlueprintCallable)
    void StartAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupParameter(int32 StateIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRootMotionVelocityScaleEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionVelocityScale(const FVector& Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetRepulsionParams(float CoreRadius, float PersonalRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetNearTargetPosition(bool bEnable, const FVector& BasePos);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniGamePlayerTransform(const FTransform& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniGamePartnerTransform(const FTransform& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetMiniGamePartnerTornadoTransform(const FTransform& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDebugDraw(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableJamComboAttack(bool bIsDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultRepulsionParams();
    
    UFUNCTION(BlueprintCallable)
    void SetBeforeSignalAttack(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetRootMotionVelocityScale();
    
    UFUNCTION(BlueprintCallable)
    void RequestTransformWolf(bool bIsImmediately);
    
    UFUNCTION(BlueprintCallable)
    void RequestTransformHuman(bool bIsImmediately);
    
    UFUNCTION(BlueprintCallable)
    void PlayHintTalk(EHbkEm6000_HintTalkType Type);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionVoice(EHbkEm6000_ActionVoiceType Type, bool IsForceStopPrevious);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateChangeEvent(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchProjectile(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam);
    
    UFUNCTION(BlueprintCallable)
    void OnCommandBattleSuccessFinisher();
    
    UFUNCTION(BlueprintCallable)
    void OnCommandBattleResult(EHbkBossCommandBattleResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeHealthEvent(float Value, float PrevValue, float ValueRate);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWolf() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransforming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRootMotionVelocityScaleEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResourceLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingSpecialAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingJamComboAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIntermissionControllerRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHuman() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableDebugDraw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageStateForFirstHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeforeSignalAttack() const;
    
    UFUNCTION(BlueprintCallable)
    UHbkPlayerMovePointComponent* GetUHbkPlayerMovePointComp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSelectedTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRepelledCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPlayingAttackAnimTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPlayingActionAnimTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm6000_PhaseParameter GetPhaseParameter(int32 StateIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm6000_PhaseFixedParameter GetPhaseFixedParameter(int32 StateIndex) const;
    
    UFUNCTION(BlueprintCallable)
    UHbkPartnerTargetPointComponent* GetPartnerTargetPointComp();
    
    UFUNCTION(BlueprintCallable)
    UHbkPartnerAppearPointComponent* GetPartnerAppearPointComp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNearTargetPosition(const FVector& BasePos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMiniGamePlayerTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMiniGamePartnerTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetMiniGamePartnerTornadoTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDownStateTime(float& OutDownStateTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkDifficultyType GetDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDamageRootMotionVelocityScale(FVector& OutDamageRootMotionVelocityScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm6000_PhaseParameter GetCurrentPhaseParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm6000_PhaseFixedParameter GetCurrentPhaseFixedParameter() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndActionState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReceiveSignalAttack() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSetupParameter(int32 StateIndex, const FHbkEm6000_PhaseParameter& Param);
    

    // Fix for true pure virtual functions not being implemented
};

