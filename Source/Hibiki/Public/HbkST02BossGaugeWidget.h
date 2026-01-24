#pragma once
#include "CoreMinimal.h"
#include "EHbkEm2000ChargeState.h"
#include "HbkBossGageBaseWidget.h"
#include "HbkST02BossGaugeWidget.generated.h"

class AHbkBossCharacterBase;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkST02BossGaugeWidget : public UHbkBossGageBaseWidget {
    GENERATED_BODY()
public:
    UHbkST02BossGaugeWidget();

    UFUNCTION(BlueprintCallable)
    void ST02GaugeSetUp(AHbkBossCharacterBase* BossActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPhaseStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_ChangeChargeState(EHbkEm2000ChargeState State);
    
};

