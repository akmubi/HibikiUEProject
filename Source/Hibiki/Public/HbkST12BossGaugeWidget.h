#pragma once
#include "CoreMinimal.h"
#include "HbkBossGageBaseWidget.h"
#include "HbkST12BossGaugeWidget.generated.h"

class UHbkToughComponent;
class UImage;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkST12BossGaugeWidget : public UHbkBossGageBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ToughGaugeValueAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* BreakToughGaugeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RecoverToughGaugeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* StanGauge_Break;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkToughComponent> ToughComponent;
    
public:
    UHbkST12BossGaugeWidget();

    UFUNCTION(BlueprintCallable)
    void ToughDamaged(float ToughRate);
    
    UFUNCTION(BlueprintCallable)
    void RecoverToughGauge();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPhaseStart_Blueprint();
    
    UFUNCTION(BlueprintCallable)
    void BreakToughGauge();
    
};

