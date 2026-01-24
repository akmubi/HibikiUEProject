#pragma once
#include "CoreMinimal.h"
#include "EHbkBossUIEventType.h"
#include "HbkBossGageBaseWidget.h"
#include "HbkST06BossGaugeWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkST06BossGaugeWidget : public UHbkBossGageBaseWidget {
    GENERATED_BODY()
public:
    UHbkST06BossGaugeWidget();

protected:
    UFUNCTION(BlueprintCallable)
    float GetPlayerHealthRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetKorsicaHealthRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BossHealthRateScaling(int32 StateIndex, float HealthRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_BossUIEvent(EHbkBossUIEventType EventType, float FloatValue);
    
};

