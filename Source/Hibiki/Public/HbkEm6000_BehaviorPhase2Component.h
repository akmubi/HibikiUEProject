#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_BehaviorHumanBaseComponent.h"
#include "HbkEm6000_BehaviorPhase2Component.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkEm6000_BehaviorPhase2Component : public UHbkEm6000_BehaviorHumanBaseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRateForBarrier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRateForShield;
    
public:
    UHbkEm6000_BehaviorPhase2Component(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool OnHealthLowerEventForShield(float TriggerHealthRate, float CurrentHealthRate);
    
    UFUNCTION(BlueprintCallable)
    bool OnHealthLowerEventForBarrier(float TriggerHealthRate, float CurrentHealthRate);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForShield(float DeltaTime, float ElapsedTime);
    
    UFUNCTION(BlueprintCallable)
    bool OnActionEventForBarrier(float DeltaTime, float ElapsedTime);
    
};

