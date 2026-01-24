#pragma once
#include "CoreMinimal.h"
#include "HbkPhotoMenuPageBaseWidget.h"
#include "HbkPhotoMenuPage_CameraWidget.generated.h"

class UHbkScrollBox;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenuPage_CameraWidget : public UHbkPhotoMenuPageBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkScrollBox* ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* ListBox;
    
public:
    UHbkPhotoMenuPage_CameraWidget();

};

