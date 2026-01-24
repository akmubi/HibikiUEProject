#pragma once
#include "CoreMinimal.h"
#include "EHbkHUDFollowDevice.h"
#include "HbkOptionSettingBaseWidget.h"
#include "HbkOptionSettingKeyAssignmentWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkListControlWidget;
class UHbkOptionInformationPanelWidget;
class UHbkOptionListItemKeyAssignmentWidget;
class UPanelWidget;
class UScrollBox;
class UWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionSettingKeyAssignmentWidget : public UHbkOptionSettingBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkHUDFollowDevice DeviceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResetExecuteSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionInformationPanelWidget* InformationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* TypeSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PlatformSwitcher_A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PlatformSwitcher_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TabArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* TabListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* InputMask;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemKeyAssignmentWidget* KeepWaitKeyAssignmentItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHbkOptionListItemKeyAssignmentWidget*> DuplicateItemWidgets;
    
public:
    UHbkOptionSettingKeyAssignmentWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateTabInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedTabListItem(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelReplacePrioritizeKeyAssign();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptReplacePrioritizeKeyAssign();
    
    UFUNCTION(BlueprintCallable)
    void CancelDialog();
    
    UFUNCTION(BlueprintCallable)
    void AcceptRestoreDefaultSettings();
    
};

