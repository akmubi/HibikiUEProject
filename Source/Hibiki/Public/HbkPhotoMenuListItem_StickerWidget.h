#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoMenuItemWidget.h"
#include "HbkPhotoMenuListItem_StickerWidget.generated.h"

class UImage;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenuListItem_StickerWidget : public UHbkPhotoMenuItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* StickerImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* DisableImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* ButtonIcon_UI;
    
public:
    UHbkPhotoMenuListItem_StickerWidget();

};

