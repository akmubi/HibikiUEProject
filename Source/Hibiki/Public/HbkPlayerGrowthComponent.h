#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkPlayerGrowthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerGrowthComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitHealthAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OneHealthGaugeAmountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitGaugeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealthGrowthMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthGrowthAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeGrowthMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeGrowthAmount;
    
public:
    UHbkPlayerGrowthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealthGrowthRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentHealthGrowthNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealthGrowthAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentGaugeGrowthAmount() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddHealthGrowthPieceItem();
    
    UFUNCTION(BlueprintCallable)
    void AddHealthGrowthItem();
    
    UFUNCTION(BlueprintCallable)
    void AddGaugeGrowthPieceItem();
    
    UFUNCTION(BlueprintCallable)
    void AddGaugeGrowthItem();
    
};

