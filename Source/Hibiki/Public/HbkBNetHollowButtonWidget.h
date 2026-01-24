#pragma once
#include "CoreMinimal.h"
#include "HbkBNetButtonWidget.h"
#include "HbkBNetHollowButtonWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetHollowButtonWidget : public UHbkBNetButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BackgroundImage;
    
public:
    UHbkBNetHollowButtonWidget();

};

