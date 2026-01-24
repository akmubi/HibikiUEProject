#pragma once
#include "CoreMinimal.h"
#include "HbkBNetComponentBaseWidget.h"
#include "HbkBNetButtonWidget.generated.h"

class UAkAudioEvent;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetButtonWidget : public UHbkBNetComponentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DecideSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DeselectAnimation;
    
public:
    UHbkBNetButtonWidget();

};

