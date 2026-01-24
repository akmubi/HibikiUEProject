#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkButtonWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkButtonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bisCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HoldComp_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HoldValue_Anim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Release_Anim;
    
public:
    UHbkButtonWidget();

    UFUNCTION(BlueprintCallable)
    void SetHoldTime(float HoldRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetButtonData(FName ButtonID, FName ButtonSize);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseButton();
    
    UFUNCTION(BlueprintCallable)
    void HoldComplete();
    
};

