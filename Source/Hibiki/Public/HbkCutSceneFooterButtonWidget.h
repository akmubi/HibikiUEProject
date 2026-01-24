#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkCutSceneFooterButtonWidget.generated.h"

class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCutSceneFooterButtonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* SkipButton;
    
public:
    UHbkCutSceneFooterButtonWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHoldTime(float HoldRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HoldComplete();
    
};

