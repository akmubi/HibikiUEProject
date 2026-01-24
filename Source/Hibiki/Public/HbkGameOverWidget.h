#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "TngUserWidgetCallBackDelegate.h"
#include "HbkGameOverWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkGameOverWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnSelectRestart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnSelectBackToTitle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* HoldButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MusicStopSound;
    
public:
    UHbkGameOverWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReleaseHold_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hold_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Continue_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddHoldTime_BP(float Rate);
    
};

