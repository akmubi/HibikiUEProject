#pragma once
#include "CoreMinimal.h"
#include "HbkDebugWidgetBase.h"
#include "HbkDebugImguiWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkDebugImguiWidget : public UHbkDebugWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EnableAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* DisableAnimation;
    
public:
    UHbkDebugImguiWidget();

};

