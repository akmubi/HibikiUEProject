#pragma once
#include "CoreMinimal.h"
#include "EHbkHUDFollowDevice.h"
#include "HbkUserWidget.h"
#include "HbkModelViewerPreviewPageFooterButtonWidget.generated.h"

class UHbkButtonWidget;
class UHorizontalBox;
class USpacer;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UHbkModelViewerPreviewPageFooterButtonWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ShowWallpaperText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HideWallpaperText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* Button_Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon_Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon_Move1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_ButtonIcon_Move1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon_Move2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_ButtonIcon_Move2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon_Move3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_ButtonIcon_Move3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon_Rotate1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon_Rotate2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_ButtonIcon_Rotate2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* Button_Zoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_Zoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* Button_ChangeWallpaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer_ChangeWallpaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_ShowWallpaper;
    
public:
    UHbkModelViewerPreviewPageFooterButtonWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLatestFollowDeviceChanged(EHbkHUDFollowDevice LatestDeviceType);
    
};

