#pragma once
#include "CoreMinimal.h"
#include "EHbkButtonType.h"
#include "HbkButtonBaseWidgetOnClickedDelegate.h"
#include "HbkButtonBaseWidgetOnHoldDownCanceledDelegate.h"
#include "HbkButtonBaseWidgetOnHoldDownCompletedDelegate.h"
#include "HbkButtonBaseWidgetOnHoldDownFailedDelegate.h"
#include "HbkButtonBaseWidgetOnHoldDownStartedDelegate.h"
#include "HbkButtonBaseWidgetOnHoveredDelegate.h"
#include "HbkButtonBaseWidgetOnPressedDelegate.h"
#include "HbkButtonBaseWidgetOnReleasedDelegate.h"
#include "HbkButtonBaseWidgetOnUnhoveredDelegate.h"
#include "HbkUserWidget.h"
#include "HbkButtonBaseWidget.generated.h"

class UHbkButtonBaseWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkButtonBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldDownDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkButtonBaseWidgetOnClicked OnButtonClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkButtonBaseWidgetOnPressed OnButtonPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkButtonBaseWidgetOnReleased OnButtonReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkButtonBaseWidgetOnHovered OnButtonHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkButtonBaseWidgetOnUnhovered OnButtonUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkButtonBaseWidgetOnHoldDownStarted OnHoldDownButtonStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkButtonBaseWidgetOnHoldDownCanceled OnHoldDownButtonCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkButtonBaseWidgetOnHoldDownCompleted OnHoldDownButtonCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkButtonBaseWidgetOnHoldDownFailed OnHoldDownButtonFailed;
    
public:
    UHbkButtonBaseWidget();

    UFUNCTION(BlueprintCallable)
    void SetDelegateButtonWidget(UHbkButtonBaseWidget* NewDelegateButtonWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCanHoldDown(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonType(EHbkButtonType Type);
    
    UFUNCTION(BlueprintCallable)
    void ResetButtonState();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseKey();
    
    UFUNCTION(BlueprintCallable)
    void PressKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHoldDown() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUnhovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnReleased();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHovered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldDownStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldDownFailed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldDownCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHoldDownCanceled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClicked();
    
};

