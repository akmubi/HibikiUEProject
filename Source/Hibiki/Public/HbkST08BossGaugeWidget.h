#pragma once
#include "CoreMinimal.h"
#include "HbkBossGageBaseWidget.h"
#include "HbkST08BossGaugeWidget.generated.h"

class AActor;
class UDamageType;
class UHbkMultipleToughComponent;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkST08BossGaugeWidget : public UHbkBossGageBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ToughGaugeValueAnim;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkMultipleToughComponent> MultipleToughComponent;
    
public:
    UHbkST08BossGaugeWidget();

    UFUNCTION(BlueprintCallable)
    void MultiToughDamaged(int32 Index, AActor* DamageCauser, const UDamageType* InDamageType);
    
};

