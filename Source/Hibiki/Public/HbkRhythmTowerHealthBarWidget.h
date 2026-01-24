#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "HbkHealthBarBaseWidget.h"
#include "HbkRhythmTowerHealthBarWidget.generated.h"

class AHbkPlayerController;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkRhythmTowerHealthBarWidget : public UHbkHealthBarBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ReverbeOutLine_Front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ReverbeOutLine_Back;
    
public:
    UHbkRhythmTowerHealthBarWidget();

    UFUNCTION(BlueprintCallable)
    void SetSpParamerter(float Current, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    void SetSPAttackIcon(AHbkPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetParamerters(float hpCurrent, int32 hpMax, float spCurrent, int32 spMax);
    
    UFUNCTION(BlueprintCallable)
    void SetOverchargeParamerter(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetLifeTankParamerter(TArray<float> LifeTankRateList);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHPRateAnim_BP(int32 GrowthNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetHpParamerter(float Current, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetGaugeGrowData(float Gauge1Rate, float Gauge2Rate);
    
};

