#pragma once
#include "CoreMinimal.h"
#include "HbkWindowBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkPauseMenuWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkComboListWidget;
class UHbkHowToPlayTask;
class UHbkListControlWidget;
class UHbkOptionWidget;
class UHbkPauseMenuInformationPanelWidget;
class UHbkShowComboListTask;
class UHbkShowOptionTask;
class UHbkUserWidget;
class UHbkWaitingNotificationWidget;
class UPanelWidget;
class UTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPauseMenuWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkComboListWidget> ComboListWidgetSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHbkOptionWidget> OptionWidgetSoftClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkUserWidget> OutFrameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenMenuSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CloseMenuSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LevelTransitionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LevelLoadSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* ListArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPauseMenuInformationPanelWidget* InformationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkWaitingNotificationWidget> WaitingNotificationWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkHowToPlayTask* ShowHowToPlayTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkShowComboListTask* ShowComboListTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkShowOptionTask* ShowOptionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkUserWidget* OutFrameWidget;
    
public:
    UHbkPauseMenuWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateDescription(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void ReturnMenu();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedListItem(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void CancelDialog();
    
    UFUNCTION(BlueprintCallable)
    void AcceptReturnToTitle();
    
    UFUNCTION(BlueprintCallable)
    void AcceptReturnToRTMenu();
    
    UFUNCTION(BlueprintCallable)
    void AcceptReturnToRDMenu();
    
    UFUNCTION(BlueprintCallable)
    void AcceptReturnToHideout();
    
    UFUNCTION(BlueprintCallable)
    void AcceptReturnToBPMRushMenu();
    
};

