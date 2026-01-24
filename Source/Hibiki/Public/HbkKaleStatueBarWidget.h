#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkKaleStatueBarWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkKaleStatueBarWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HalfWayPointAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DamageAnim;
    
public:
    UHbkKaleStatueBarWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TakeDamage_BP(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHealthRateMat(float Rate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CheckGaugeStatus_BP(float Rate);
    
};

