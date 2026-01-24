#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAIController.h"
#include "HbkEm0740_AIController.generated.h"

UCLASS(Blueprintable)
class AHbkEm0740_AIController : public AHbkEnemyAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FirstBurningIntervalTimeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurningIntervalTimeCount_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurningIntervalTimeCount_Max;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CounterAttackRequestDamageCountMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CounterAttackRequestDamageCountMax;
    
public:
    AHbkEm0740_AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpBurningIntervalRandomRange();
    
    UFUNCTION(BlueprintCallable)
    void SetEnabledBurningState(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterAttackRequestDamageCount(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetCounterAttackRequest(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBurningIntervalTime(float Count);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidAttack(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledBurningState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCounterAttackRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBurningIntervalTimer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAvoidAttack() const;
    
};

