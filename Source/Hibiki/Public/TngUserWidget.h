#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "ETngKeyAxisMap.h"
#include "ETngKeyButtonMap.h"
#include "ETngKeyState.h"
#include "TngUserWidgetCallBackDelegate.h"
#include "TngUserWidget.generated.h"

class APlayerController;
class UHbkHealthBarWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UTngUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnTngEnable_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnTngDisable_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnTngAccept_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnTngCancel_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnTngBeginSelect_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnTngEndSelect_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnTngBeginOver_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnTngEndOver_BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChangeDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegisterLayer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsChangeVisibleDrawType;
    
    UTngUserWidget();

    UFUNCTION(BlueprintCallable)
    bool SetGamePauseWithWidget(APlayerController* PlayerController, bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostChangeParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConsoleMachine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UHbkHealthBarWidget* GetHealthBarWidget();
    
    UFUNCTION(BlueprintCallable)
    void FinishTngUserWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTngEndSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTngEndOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTngEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTngDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTngCancel();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTngBeginSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTngBeginOver();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_OnTngAccept();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply Blueprint_OnInputButtonResult(ETngKeyButtonMap Button, ETngKeyState KeyState, const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply Blueprint_OnInputAxisResult(ETngKeyAxisMap Axis, ETngKeyState KeyState, float Value, const FAnalogInputEvent& AnalogEvent);
    
};

