#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoMenuPageBaseWidget.h"
#include "Templates/SubclassOf.h"
#include "HbkPhotoMenuPage_FrameWidget.generated.h"

class UAkAudioEvent;
class UHbkPhotoMenuListItem_FrameWidget;
class UHbkScrollBox;
class UTextBlock;
class UWidgetSwitcher;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenuPage_FrameWidget : public UHbkPhotoMenuPageBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkPhotoMenuListItem_FrameWidget> FrameItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkScrollBox* FrameScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkScrollBox* WallpaperScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* ListBox_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* ListBox_Wallpaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* ListSwicher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Title_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Title_Wallpaper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ValueChangeSE;
    
public:
    UHbkPhotoMenuPage_FrameWidget();

};

