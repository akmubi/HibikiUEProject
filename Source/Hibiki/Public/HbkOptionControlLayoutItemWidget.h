#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkOptionControlLayoutItemWidget.generated.h"

class UHbkButtonWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkOptionControlLayoutItemWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkButtonWidget* ButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText;
    
public:
    UHbkOptionControlLayoutItemWidget();

};

