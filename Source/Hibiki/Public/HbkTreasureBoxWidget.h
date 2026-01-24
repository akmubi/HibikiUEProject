#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTreasureBoxWidget.generated.h"

class UHbkCountDownWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTreasureBoxWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkCountDownWidget* CountDownWidget;
    
public:
    UHbkTreasureBoxWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blurprint_StopMashingBeathit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blurprint_StartMashingBeathit(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetNeedPower(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_SetGaugeRate(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OpenGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_CloseGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ButtonMashing();
    
};

