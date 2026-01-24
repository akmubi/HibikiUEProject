#pragma once
#include "CoreMinimal.h"
#include "EHbkBossUIEventType.h"
#include "HbkBossGageBaseWidget.h"
#include "HbkST10BossGaugeWidget.generated.h"

class AHbkBossCharacterBase;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkST10BossGaugeWidget : public UHbkBossGageBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NowHealthValue;
    
public:
    UHbkST10BossGaugeWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToWolf_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToHuman_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverHealth(EHbkBossUIEventType EventType, float FloatValue);
    
    UFUNCTION(BlueprintCallable)
    void PhaseStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DirectSetHealthRate(float Rate);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBossActor_BP(AHbkBossCharacterBase* BossActor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnPhaseStart();
    
};

