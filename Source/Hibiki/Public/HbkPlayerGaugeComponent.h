#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkPartnerType.h"
#include "HbkPartnerGaugeInfo.h"
#include "HbkReverbGaugeInfo.h"
#include "HbkReverbGaugeOverChargeInfo.h"
#include "HbkPlayerGaugeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerGaugeComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkPartnerType, FHbkPartnerGaugeInfo> PartnerGauges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkReverbGaugeInfo ReverbGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkReverbGaugeOverChargeInfo ReverbGaugeOverCharge;
    
public:
    UHbkPlayerGaugeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UsePartnerGauge(EHbkPartnerType Type, int32 RecastBeatCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRevrebGaugeRate(const TArray<FString>& Args);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealthRate(const TArray<FString>& Args);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsablePartner(EHbkPartnerType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnoughGaugeAccumulated(int32 Cost) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPartnerGaugeRate(EHbkPartnerType Type) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPartnerGaugeInfo(EHbkPartnerType Type, FHbkPartnerGaugeInfo& GaugeInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverChargeCurrentStockMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverChargeCurrentStockCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetGaugeMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGaugeCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccumulatedGaugeValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccumulatedGaugeRate(int32 GaugeIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccumulatedGaugeCount() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddOverchargeStockNum();
    
    UFUNCTION(BlueprintCallable)
    void AddOverchargeNum();
    
public:
    UFUNCTION(BlueprintCallable)
    void AccumulateGaugeValue(float AddValue);
    
    UFUNCTION(BlueprintCallable)
    void AccumulateGauge(int32 AddNum);
    
};

