#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkPhotoMenuParentWidget.generated.h"

class UAkAudioEvent;
class UHbkPhotoMenuCaptureIconWidget;
class UHbkPhotoMenuPageBaseWidget;
class UHbkPhotoMenuPage_CameraWidget;
class UHbkPhotoMenuPage_FilterWidget;
class UHbkPhotoMenuPage_FrameWidget;
class UHbkPhotoMenuPage_PoseWidget;
class UHbkPhotoMenuPage_StickerWidget;
class UHbkPhotoMenuTabItemWidget;
class UHbkStickerParentWidget;
class UHbkTitleMenuBGWidget;
class UImage;
class UOverlay;
class USizeBox;
class UWidgetAnimation;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenuParentWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PhotoMenuBasePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* PhotoMenuOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* PageSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuPage_CameraWidget* Adjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuPage_FilterWidget* Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuPage_PoseWidget* Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuPage_FrameWidget* Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuPage_StickerWidget* Sticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuTabItemWidget* Tab_Adjustment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuTabItemWidget* Tab_Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuTabItemWidget* Tab_Pose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuTabItemWidget* Tab_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuTabItemWidget* Tab_Sticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTitleMenuBGWidget* FooterButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPhotoMenuCaptureIconWidget* CaptureSuccessIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkUserWidget> OutLineFrameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* BasePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FrameImagePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* FrameSizePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* InOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkStickerParentWidget* StickerRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TabChangeSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShutterSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DecideSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MenuSwitchSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartMenuSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StickerDesideSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StickerCancelSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StickerDeleteSE;
    
public:
    UHbkPhotoMenuParentWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnValueChangedFilterPagePresetBlendRatio(UHbkPhotoMenuPage_FilterWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedStickerTabChanged(UHbkPhotoMenuPage_StickerWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedStickerDeleted(UHbkPhotoMenuPage_StickerWidget* Sender, int32 DeleteId);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedStickerChanged(UHbkPhotoMenuPage_StickerWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedPosePageMotionChanged(UHbkPhotoMenuPage_PoseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedPosePageFacialChanged(UHbkPhotoMenuPage_PoseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedPosePageCharacterChanged(UHbkPhotoMenuPage_PoseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedFilterPagePresetTypeChanged(UHbkPhotoMenuPage_FilterWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedFilterPageEnabledFilterChanged(UHbkPhotoMenuPage_FilterWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnResetedSticker(UHbkPhotoMenuPage_StickerWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnEndedStickerMode();
    
    UFUNCTION(BlueprintCallable)
    void OnEnabledPosePageCharacterChanged(UHbkPhotoMenuPage_PoseWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnDeletedSticker(int32 DeleteId);
    
    UFUNCTION(BlueprintCallable)
    void OnDecidedStickerChanged(UHbkPhotoMenuPage_StickerWidget* Sender);
    
    UFUNCTION(BlueprintCallable)
    void OnClickedStickerResetButton();
    
    UFUNCTION(BlueprintCallable)
    void ChangedValue(UHbkPhotoMenuPageBaseWidget* PageWidget);
    
};

