#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "HbkUserWidget.h"
#include "HbkLiftBattleWidget.generated.h"

class UHbkCommonTimerWidget;
class UOverlay;
class UTngUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkLiftBattleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayTimerTitleText;
    
public:
    UHbkLiftBattleWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleTimeLimitOverlay(ESlateVisibility visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisibleStartTitleOverlay(ESlateVisibility visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UOverlay* GetTimeLimitOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTngUserWidget* GetStartTitleUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UOverlay* GetStartTitleOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* GetStartTitleAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHbkCommonTimerWidget* GetCountDownWidget();
    
};

