#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkTutorialFooterButtonWidget.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkTutorialFooterButtonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* NextButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* CloseButton;
    
public:
    UHbkTutorialFooterButtonWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHoldTime_CancelButton(float HoldRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Release_CancelButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HoldComplete_CancelButton();
    
};

