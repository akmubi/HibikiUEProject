#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "HbkSimpleDisplayWidgetOnChangeDisplayDelegate.h"
#include "HbkUserWidget.h"
#include "HbkSimpleDisplayWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkSimpleDisplayWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSimpleDisplayWidgetOnChangeDisplay OnShow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkSimpleDisplayWidgetOnChangeDisplay OnHide;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideAnimation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishShowAnimationDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishHideAnimationDelegate;
    
public:
    UHbkSimpleDisplayWidget();

    UFUNCTION(BlueprintCallable)
    void Show();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishShowAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishHideAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void Hide();
    
};

