#pragma once
#include "CoreMinimal.h"
#include "HbkBNetButtonWidget.h"
#include "HbkBNetSolidButtonWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetSolidButtonWidget : public UHbkBNetButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundImage;
    
public:
    UHbkBNetSolidButtonWidget();

};

