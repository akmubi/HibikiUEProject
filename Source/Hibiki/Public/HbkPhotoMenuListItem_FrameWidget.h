#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoMenuItemWidget.h"
#include "HbkPhotoMenuListItem_FrameWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenuListItem_FrameWidget : public UHbkPhotoMenuItemWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* FrameImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* SelectIcon;
    
public:
    UHbkPhotoMenuListItem_FrameWidget();

};

