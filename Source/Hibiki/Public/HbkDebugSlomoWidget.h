#pragma once
#include "CoreMinimal.h"
#include "HbkDebugWidgetBase.h"
#include "HbkDebugSlomoWidget.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UHbkDebugSlomoWidget : public UHbkDebugWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* EnableAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* SlomoValueText;
    
public:
    UHbkDebugSlomoWidget();

};

