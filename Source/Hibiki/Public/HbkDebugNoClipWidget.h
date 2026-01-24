#pragma once
#include "CoreMinimal.h"
#include "HbkDebugWidgetBase.h"
#include "HbkDebugNoClipWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkDebugNoClipWidget : public UHbkDebugWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EnableAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DisableAnimation;
    
public:
    UHbkDebugNoClipWidget();

};

