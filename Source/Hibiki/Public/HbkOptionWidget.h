#pragma once
#include "CoreMinimal.h"
#include "Animation/WidgetAnimation.h"
#include "HbkTaskOptionDelegateDelegate.h"
#include "HbkWindowBaseWidget.h"
#include "HbkOptionWidget.generated.h"

class UAkAudioEvent;
class UHbkButtonBaseWidget;
class UHbkListControlWidget;
class UHbkOptionCommonBackgroundWidget;
class UHbkOptionInformationPanelWidget;
class UHbkOptionListItemWidget;
class UImage;
class UOverlay;
class UPanelWidget;
class UScrollBox;
class UUserWidget;
class UWidget;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionWidget : public UHbkWindowBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTaskOptionDelegate DisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OpenMenuSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ResetExecuteSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeValueSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LevelTransitionSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CancelSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ContentRootOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionCommonBackgroundWidget* CommonBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionInformationPanelWidget* InformationPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ListSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ListSwitcherForInitialSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OptionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ListScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* ListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* TabArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* GamerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkListControlWidget* TabListControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OpenAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* CloseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* ScreenModeListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* ScreenResolutionListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* FrameRateLImitListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* GraphicsPresetListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* CameraMotionBlurListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* DynamicShadowMapsListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* StaticGlobalIlluminationListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* StaticShadowMapsListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* FoliageQualityListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* SSAOListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* SSRListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* DepthOfFieldListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* AntiAliasingListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* UpscalingTechniqueListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* DLSSQualityListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* FSR1QualityListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* FSR1SharpnessListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* FSR2QualityListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* FSR2SharpnessListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* XeSSQualityListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* TSRQualityListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* MasterVolumeListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* BgmVolumeListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* VoiceVolumeListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* SFXVolumeListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* InstFXVolumeListItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkOptionListItemWidget* RichTextBlockImageSEtListItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent OnFinishCloseAnimationDelegate;
    
public:
    UHbkOptionWidget();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateTabInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInfoForInitialSetting(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInfo(UWidget* Widget, bool bPlayAnimation, bool bPlaySound);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestAutoSaveGameOnHideOut();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishCloseAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedTabListItem(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedListItemShowSetting(const UHbkButtonBaseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void CancelDialog();
    
    UFUNCTION(BlueprintCallable)
    void AcceptRestoreDefaultSettings();
    
    UFUNCTION(BlueprintCallable)
    void AcceptRestartFromCheckPoint();
    
    UFUNCTION(BlueprintCallable)
    void AcceptReflectChangesForInitialSetting();
    
    UFUNCTION(BlueprintCallable)
    void AcceptReflectChanges();
    
    UFUNCTION(BlueprintCallable)
    void AcceptDiscardChangesAndClose();
    
};

