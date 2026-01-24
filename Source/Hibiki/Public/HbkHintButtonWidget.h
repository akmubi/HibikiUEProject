#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkHintButtonWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkHintButtonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PopIn_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Out_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Loop_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InputComp_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* GaugeValue_Anim;
    
public:
    UHbkHintButtonWidget();

    UFUNCTION(BlueprintCallable)
    void PopInWidget();
    
    UFUNCTION(BlueprintCallable)
    void OutWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerButton();
    
    UFUNCTION(BlueprintCallable)
    void OnSuccess();
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

