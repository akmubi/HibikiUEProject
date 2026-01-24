#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BossActionDelegateDelegate.h"
#include "CharaAttackImpactDelegateDelegate.h"
#include "EQa1milActionVoiceType.h"
#include "Em1000UpdateMaterialDelegateDelegate.h"
#include "HbkBossCharacterBase.h"
#include "HbkEnemyAttackAnimInfo.h"
#include "HbkLaunchParam.h"
#include "Qa1milChangePartsStateDelegateDelegate.h"
#include "Qa1milGeneralNoParamDelegateDelegate.h"
#include "Qa1milOnCancelConditionDelegateDelegate.h"
#include "Qa1milOnHandTargetStateDelegateDelegate.h"
#include "Qa1milOnPartsDamageDelegate.h"
#include "HbkEm1000_ST01Boss.generated.h"

class AActor;
class AHbkEm1000_AIController;
class UAnimMontage;
class UCapsuleComponent;
class UDataTable;
class UMaterialInterface;

UCLASS(Blueprintable)
class AHbkEm1000_ST01Boss : public AHbkBossCharacterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQa1milOnPartsDamage OnPartsDamage_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQa1milChangePartsStateDelegate OnChangePartsState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQa1milOnCancelConditionDelegate OnCancelCondition_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQa1milOnHandTargetStateDelegate OnHandTargetState_Delegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaAttackImpactDelegate OnImpactNoticeSelf;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm1000UpdateMaterialDelegate OnUpdateMaterialParam;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQa1milGeneralNoParamDelegate OnAbortProjectile_Delegate;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnEndPhase0;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnStartPhase1;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnEndPhase1;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnEndPhase2;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnEndPhase3;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossActionDelegate OnEndPhase4;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinuousPunchChanceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BeamAttackChanceCount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* TargetVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> StageTableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> MoveBasePointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BasePointLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpectrumMaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpectrumOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadPartsMainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadPartsLName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadPartsRName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLaunchParam SingleMissileParamL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkLaunchParam SingleMissileParamR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemyAttackAnimInfo> ContinuousAttackAnimInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadBrokenDamageScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandDamageLSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandDamageRSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandDamageColorOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandDamageRateOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandRimLSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandRimRSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChestRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseMaskRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseDmLRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BaseDmRRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InheadRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadLightRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadLightDmLRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadLightDmRRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShoulderRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MayuLightLRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MayuLightRRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MayuLightRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EyeLightRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChestLightRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CoreRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveRimSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RimOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadLightRimOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShoulderRimOptionalName0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShoulderRimOptionalName1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShoulderRimOptionalName2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LightRimOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CoreRimOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmissiveRimOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadDisplaySlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadDisplayOptionalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NormalModeMaterial_Red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NormalModeMaterial_Yellow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NormalModeMaterial_Core;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NormalModeMaterial_Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HonkiModeMaterial_Red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HonkiModeMaterial_Yellow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HonkiModeMaterial_Core;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HonkiModeMaterial_Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionVoiceDT;
    
public:
    AHbkEm1000_ST01Boss(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnbindStageTable();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StartHandAttack(bool bLeft);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartCircleMove();
    
    UFUNCTION(BlueprintCallable)
    void SetStageTableActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetOncePunchingFlag(bool Flag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetEnableArmReturn(bool Enable);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReserveBattlePhase(int32 Phase);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayActionVoice(EQa1milActionVoiceType Type, bool IsForceStopPrevious);
    
    UFUNCTION(BlueprintCallable)
    void PerformLaunchSingleMissile(bool LeftMissle);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPartsDamage(FName PartName, float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissileAttackStart();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnloadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnLaunchSingleMissile();
    
    UFUNCTION(BlueprintCallable)
    void OnExAttack(const FGameplayTag& ExAttackTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeState(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmReturnImmediate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnArmReturn();
    
    UFUNCTION(BlueprintCallable)
    void OnArmRetrnCountDown(int32 NoteCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void LaunchPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsQuickArmReternDamage(const FGameplayTagContainer& DamageTags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotCameraSpecial();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeftMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsContinuousAttackStart(const FGameplayTag& AttackTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrokenHeadPartsR() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBrokenHeadPartsL() const;
    
    UFUNCTION(BlueprintCallable)
    void InitBreakHeadParts();
    
    UFUNCTION(BlueprintCallable)
    bool GetOncePunchingFlag();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveBasePointPos() const;
    
public:
    UFUNCTION(BlueprintCallable)
    FLinearColor GetEyeLightColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm1000_AIController* GetEm1000AI() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetContinuousAttackInfoIndex(int32 PrevIndex, int32 RemainCount, bool IsLeftAttack);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattlePhase() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndHandAttack();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndContinuousAttack();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EndCircleMove();
    
    UFUNCTION(BlueprintCallable)
    void ChangeColorFromMode(bool isSerious);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeBattlePhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCircleMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CancelInteractQTE();
    
    UFUNCTION(BlueprintCallable)
    void CallOnMissileAttack();
    
    UFUNCTION(BlueprintCallable)
    void BreakHeadPartsR();
    
    UFUNCTION(BlueprintCallable)
    void BreakHeadPartsL();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PerformExAttack(const FGameplayTag& ExAttackTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnSPAttackBossCancelEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnContinuousAttack(int32 AttackNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBreakHeadPartsR();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnBreakHeadPartsL();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector Blueprint_GetMissileLandInPos(int32 Missile) const;
    
    UFUNCTION(BlueprintCallable)
    void BindStageTable();
    
};

