#pragma once
#include "CoreMinimal.h"
#include "HbkDebugWidgetBase.h"
#include "HbkDebugXCloudWidget.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkDebugXCloudWidget : public UHbkDebugWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EnableAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* PlanText;
    
public:
    UHbkDebugXCloudWidget();

};

