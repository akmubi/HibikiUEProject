#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkGaugeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkGaugeComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitAccumulatedGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoAccumulateTime;
    
public:
    UHbkGaugeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInitAccumulatedGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGaugeMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccumulatedGaugeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccumulatedGaugeRate(int32 GaugeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccumulatedGaugeCount() const;
    
    UFUNCTION(BlueprintCallable)
    void AccumulateGaugeValue(float AddValue);
    
    UFUNCTION(BlueprintCallable)
    void AccumulateGauge(int32 AddNum);
    
};

