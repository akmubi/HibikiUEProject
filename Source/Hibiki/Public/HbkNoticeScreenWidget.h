#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkNoticeScreenWidget.generated.h"

class UBorder;
class UHbkTitleWipeWidget;
class UPanelWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UHbkNoticeScreenWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BootScreenDisplayTimeSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ScreenSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* HelpButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTitleWipeWidget* WipeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* RootBorder;
    
public:
    UHbkNoticeScreenWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCloseWipeAnimationFinished();
    
};

