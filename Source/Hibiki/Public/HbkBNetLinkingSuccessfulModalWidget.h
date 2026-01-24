#pragma once
#include "CoreMinimal.h"
#include "HbkBNetModalBaseWidget.h"
#include "HbkBNetLinkingSuccessfulModalWidget.generated.h"

class UHbkBNetSolidButtonWidget;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetLinkingSuccessfulModalWidget : public UHbkBNetModalBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkBNetSolidButtonWidget* OkButtonWidget;
    
public:
    UHbkBNetLinkingSuccessfulModalWidget();

};

