#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHbkEmStrongFly_DownReasonType.h"
#include "HbkEmStrongFly_DashAttackMoveData.h"
#include "HbkEmStrongFly_TiredDownData.h"
#include "HbkEnemyAIController.h"
#include "HbkStrongFlyEm_AIController.generated.h"

UCLASS(Blueprintable)
class AHbkStrongFlyEm_AIController : public AHbkEnemyAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveThresholdDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveBlendSpaceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> CheckObjectTypesForHorizonralMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalMoveCheckLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalMoveValueInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalMoveThresholdForwardRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveValueAttenuationInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlyHeightInterpSpeedOnAttackInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FallDownForceEndCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackIntervalAfterFalldownForceEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttackRunCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentAttackRunCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveVelocityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackIntervalBaseCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackIntervalRunAllAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFarAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidRequestDamageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CounterAttackRequestDamageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiredDownCountMinHealthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiredDownCountMaxHealthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiredDownCountMinBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TiredDownCountMaxBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkEmStrongFly_DownReasonType, FHbkEmStrongFly_TiredDownData> TiredDownData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TiredRequestCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AfterAttackDashWaitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DownStateEndAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEmStrongFly_DashAttackMoveData> DashAttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> CheckObjectTypesForDashAttackMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashAttackMoveCheckLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashAttackMoveDecelerateInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashAttackMoveMinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashAttackDirCheckAngleDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashAttackDirInterpSpeedOnHitObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashAttackDirLimitOnSection;
    
public:
    AHbkStrongFlyEm_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTiredRequest(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetTiredCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetReservedAttackAfterMagnetCatch(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHitTargetDuringAttacking(bool bHit);
    
    UFUNCTION(BlueprintCallable)
    void SetExtraAttackCount(int32 ExCount);
    
    UFUNCTION(BlueprintCallable)
    void SetDuringMagnetCatchRecieve(bool bDuring);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultAttackInterval();
    
    UFUNCTION(BlueprintCallable)
    void SetCounterAttackRequestDamageCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterAttackRequest(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetContinuousAttack(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidRequestDamageCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidRequest(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackInterval(float IntervalCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledFarAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledAfterAttackDash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringMagnetCatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringGrapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringAttackInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTiredRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetReservedAttackAfterMagnetCatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHitTargetDuringAttacking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetExecFirstDashAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDuringMagnetCatchRecieve() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCounterAttackRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetContinuousAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvoidRequest() const;
    
};

