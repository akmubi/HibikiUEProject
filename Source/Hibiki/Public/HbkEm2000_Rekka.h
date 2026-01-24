#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BossActionDelegateDelegate.h"
#include "BossSelectTagInterface.h"
#include "EHbkEm2000ActionVoiceType.h"
#include "EHbkEm2000BridgeBreakdownMode.h"
#include "EHbkEm2000ChargeState.h"
#include "EHbkEm2000HintTalkType.h"
#include "EHbkEm2000PipeEquipState.h"
#include "EHbkEm2000SpecifyDirectionMode.h"
#include "EHbkEm2000StaggerType.h"
#include "EHbkNote.h"
#include "EnemyElectricityInterface.h"
#include "HbkBossCharacterBase.h"
#include "HbkEm2000BreakdownSpecifyDirection.h"
#include "HbkEm2000ChangeChargeStateDelegateDelegate.h"
#include "HbkEm2000ChangePipeEquipStateDelegateDelegate.h"
#include "HbkEm2000PhaseParameter.h"
#include "Templates/SubclassOf.h"
#include "HbkEm2000_Rekka.generated.h"

class AActor;
class AHbkEm2000_BreakDownStandPoint;
class AHbkEm2000_ChargePoint;
class AHbkEm2000_PipeEquipPoint;
class AHbkEm2002;
class AHbkEnemyAIController;
class AHbkEnemyCharacter;
class AHbkGimmickBase;
class AHbkProjectile;
class AHbkProjectile_Em2000Pipe;
class UAkAudioEvent;
class UDataTable;
class UHbkAnimInstance;
class UHbkFHbkEm2000ParameterAsset;
class UHbkRekkaStepSuppressionComponent;
class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AHbkEm2000_Rekka : public AHbkBossCharacterBase, public IBossSelectTagInterface, public IEnemyElectricityInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm2000ChangeChargeStateDelegate OnChangeChargeState;
    
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
    FBossActionDelegate OnEndPhaseLast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkEm2000_PipeEquipPoint*> PipeEquipPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkEm2000_ChargePoint*> ChargePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkGimmickBase*> Magnets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ThrowPipeListForBreakdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm2000BreakdownSpecifyDirection> SpecifyDirectionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SpecifyDirectionCountList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm2000ChargeState ChargeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm2000PipeEquipState PipeEquipState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm2000ChangePipeEquipStateDelegate OnChangePipeEquipState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkFHbkEm2000ParameterAsset* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Em2002Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AHbkEm2002> Em2002Actor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AHbkProjectile_Em2000Pipe>> ThrowPipeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FistDownParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystemComponent> FistDownParticleComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FistDownOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ActionVoiceDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HintTalkDT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote DamageReactionEffectiveTimeNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageReactionEffectiveTimeNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DamageStunStopSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRekkaStepSuppressionComponent* StepSuppressionComp;
    
public:
    AHbkEm2000_Rekka(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ThrowPipeInSpecifiedDirection(int32 Index, FName LaunchName);
    
    UFUNCTION(BlueprintCallable)
    bool ThrowInSpecifiedDirectionQueue(FName LaunchName, EHbkNote NoteType, int32 NoteCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TestPickSlideStagger();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartDamageReactionEffectiveTimer();
    
    UFUNCTION(BlueprintCallable)
    void SpecifyDirectionToThrowPipe(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SpawnParticleFistDown();
    
    UFUNCTION(BlueprintCallable)
    bool SignInSpecifiedDirectionQueue();
    
    UFUNCTION(BlueprintCallable)
    void SignInSpecifiedDirection(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetStaggerType(EHbkEm2000StaggerType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecifyDirectionMode(EHbkEm2000SpecifyDirectionMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetPickSlideStagger();
    
    UFUNCTION(BlueprintCallable)
    void SetGrabActorVisible(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetBrokenMeshVisible(bool visible);
    
    UFUNCTION(BlueprintCallable)
    void SetBridgeBreakdownMode(EHbkEm2000BridgeBreakdownMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveStageMagnet(bool Active);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ProjectileSynchronizeAnimation(FName SlotName, AHbkProjectile* Projectile);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayHintTalk(EHbkEm2000HintTalkType Type);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionVoice(EHbkEm2000ActionVoiceType Type, bool IsForceStopPrevious);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStateChangeEvent(int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnloadCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnEndDamageState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable)
    void OnComboCountUp(int32 ComboCount, bool bScoreBonus);
    
    UFUNCTION(BlueprintCallable)
    void OnComboCountClear();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAbortDamageState(AHbkEnemyCharacter* EnemyCharacter, AHbkEnemyAIController* EnemyAI);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageStagger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm2000StaggerType GetStaggerType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm2000SpecifyDirectionMode GetSpecifyDirectionMode() const;
    
    UFUNCTION(BlueprintCallable)
    float GetPipeSlalomLoopTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm2000PipeEquipState GetPipeEquipState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm2000_PipeEquipPoint* GetPipeEquipPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHbkEm2000PhaseParameter GetPhaseParameter(int32 StateIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkAnimInstance* GetGrabActorAnimInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm2000ChargeState GetChargeState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHbkEm2000_ChargePoint* GetChargePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkEm2000BridgeBreakdownMode GetBridgeBreakdownMode() const;
    
    UFUNCTION(BlueprintCallable)
    AHbkEm2000_BreakDownStandPoint* GetBreakdownStandPoint(int32 PointNo);
    
    UFUNCTION(BlueprintCallable)
    void EnqueueSpecifyDirection();
    
    UFUNCTION(BlueprintCallable)
    void DequeueSpecifyDirection();
    
    UFUNCTION(BlueprintCallable)
    void DeactiveChangeMonitor();
    
    UFUNCTION(BlueprintCallable)
    void ClearSpecifyDirectionCountList();
    
    UFUNCTION(BlueprintCallable)
    void ClearSpecifiedDirectionQueue();
    
    UFUNCTION(BlueprintCallable)
    void ChangePipeEquipState_OneHandEquip();
    
    UFUNCTION(BlueprintCallable)
    void ChangePipeEquipState_NoEquip();
    
    UFUNCTION(BlueprintCallable)
    void ChangePipeEquipState_BothHandEquip();
    
    UFUNCTION(BlueprintCallable)
    void ChangePipeEquipState(EHbkEm2000PipeEquipState State);
    
    UFUNCTION(BlueprintCallable)
    void ChangePipeEquipPoint_Obtained();
    
    UFUNCTION(BlueprintCallable)
    void ChangeChargeState_None();
    
    UFUNCTION(BlueprintCallable)
    void ChangeChargeState_Charged();
    
    UFUNCTION(BlueprintCallable)
    void ChangeChargeState(EHbkEm2000ChargeState State);
    
    UFUNCTION(BlueprintCallable)
    void AttackInSpecifiedDirection(int32 Index, EHbkNote NoteType, int32 NoteCount);
    
    UFUNCTION(BlueprintCallable)
    void ActiveStageMagnet_On();
    
    UFUNCTION(BlueprintCallable)
    void ActiveStageMagnet_Off();
    
    UFUNCTION(BlueprintCallable)
    void ActivateDrive();
    
    UFUNCTION(BlueprintCallable)
    void ActivateDischarge();
    

    // Fix for true pure virtual functions not being implemented
};

