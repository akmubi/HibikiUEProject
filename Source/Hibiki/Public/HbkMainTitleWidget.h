#pragma once
#include "CoreMinimal.h"
#include "EHbkTitleWidgetSelectName.h"
#include "EHbkTitleWidgetState.h"
#include "HbkUserWidget.h"
#include "TngUserWidgetCallBackDelegate.h"
#include "HbkMainTitleWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkMainTitleWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnStartVC;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnContinue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnControls;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTngUserWidgetCallBack OnOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InfomationTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTitleWidgetState MenuState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkTitleWidgetSelectName SelectItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isValidSaveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMoveToHideOutWhenLoading;
    
public:
    UHbkMainTitleWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectItem(bool bInitialSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetRegisterLocalPlayerWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPressAnyButtonsWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainLoopWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided_StartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided_StageSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided_Options();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided_Controls();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDecided_Continue();
    
};

