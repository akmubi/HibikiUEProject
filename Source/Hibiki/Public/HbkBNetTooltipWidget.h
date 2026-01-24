#pragma once
#include "CoreMinimal.h"
#include "HbkBNetComponentBaseWidget.h"
#include "HbkBNetTooltipWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetTooltipWidget : public UHbkBNetComponentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ButtonIconImage;
    
public:
    UHbkBNetTooltipWidget();

};

