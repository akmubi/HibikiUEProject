#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkBNetComponentBaseWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetComponentBaseWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LabelText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTextBlock;
    
public:
    UHbkBNetComponentBaseWidget();

};

