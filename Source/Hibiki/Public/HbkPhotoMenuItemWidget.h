#pragma once
#include "CoreMinimal.h"
#include "EHbkPhotoMenu_DataType.h"
#include "HbkUserWidget.h"
#include "HbkPhotoMenuItemWidget.generated.h"

class UAkAudioEvent;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkPhotoMenuItemWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkPhotoMenu_DataType DataType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DeselectAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SelectSE;
    
public:
    UHbkPhotoMenuItemWidget();

};

