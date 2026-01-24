#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkPartnerAttackType.h"
#include "EHbkPartnerType.h"
#include "Em6000_ActionEventInfo.h"
#include "Em6000_BeginPartnerAttackEventInfo.h"
#include "Em6000_ContinuousDamageEventInfo.h"
#include "Em6000_DamageAmountEventInfo.h"
#include "Em6000_DamageCountEventInfo.h"
#include "Em6000_DamageHistoryInfo.h"
#include "Em6000_ElapsedTimeEventInfo.h"
#include "Em6000_HealthLowerEventInfo.h"
#include "HbkEm6000_BehaviorBaseComponent.generated.h"

class UHbkBossSelectTagComponent;
class UHbkDamageComponent;
class UHbkEm6000_GuardComponent;
class UHbkRhythmSynchroComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_BehaviorBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkRhythmSynchroComponent* RhythmSynchroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBossSelectTagComponent* BossSelectTagComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEm6000_GuardComponent* GuardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetStateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_DamageHistoryInfo> DamageHistoryInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_DamageCountEventInfo> DamageCountEventInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_DamageCountEventInfo> DamageCountEventInfosAddPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_DamageAmountEventInfo> DamageAmountEventInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_DamageAmountEventInfo> DamageAmountEventInfosAddPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_ContinuousDamageEventInfo> ContinuousDamageEventInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_ContinuousDamageEventInfo> ContinuousDamageEventInfosAddPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_BeginPartnerAttackEventInfo> BeginPartnerAttackEventInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_BeginPartnerAttackEventInfo> BeginPartnerAttackEventInfosAddPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_ElapsedTimeEventInfo> ElapsedTimeEventInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_ElapsedTimeEventInfo> ElapsedTimeEventInfosAddPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_HealthLowerEventInfo> HealthLowerEventInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_HealthLowerEventInfo> HealthLowerEventInfosAddPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_ActionEventInfo> ActionEventInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEm6000_ActionEventInfo> ActionEventInfosAddPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SystemTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSystemEnable;
    
public:
    UHbkEm6000_BehaviorBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSystemEnable(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeStateIndex(int32 NewStateIndex);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChangeHealthEvent(float Value, float PrevValue, float ValueRate);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginPartnerAttack(EHbkPartnerType PartnerType, EHbkPartnerAttackType PartnerAttackType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSystemEnabled() const;
    
};

