#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "HbkUserWidget.h"
#include "HbkDebug_St05LiftWidget.generated.h"

class UHbkLiftCountDownWidget;
class UOverlay;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkDebug_St05LiftWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UHbkDebug_St05LiftWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleTimeLimitOverlay(ESlateVisibility visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleStartTitleOverlay(ESlateVisibility visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleGameOverOverlay(ESlateVisibility visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTextBlock* GetTimeLimitValueText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UOverlay* GetTimeLimitOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UOverlay* GetStartTitleOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetStartTitleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetGameOverAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHbkLiftCountDownWidget* GetCountDownWidget();
    
};

