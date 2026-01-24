#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkPhotoMenuCaptureIconWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenuCaptureIconWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* PopinAnimation;
    
public:
    UHbkPhotoMenuCaptureIconWidget();

};

