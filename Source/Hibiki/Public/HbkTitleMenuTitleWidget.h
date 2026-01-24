#pragma once
#include "CoreMinimal.h"
#include "HbkTitleMenuTitleWidgetDisplayEndDelegate.h"
#include "HbkUserWidget.h"
#include "HbkTitleMenuTitleWidget.generated.h"

class UAkAudioEvent;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkTitleMenuTitleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTitleMenuTitleWidgetDisplayEnd DisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_EnterPressKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AkEvent_FailedToLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_BuildInfo;
    
public:
    UHbkTitleMenuTitleWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPressAnyKey();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowInitializing();
    
    UFUNCTION(BlueprintCallable)
    void OnEndAnimEnd();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCloseDialogAndRequestExit();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HidePressAnyKey();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideInitializing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndAnim();
    
};

