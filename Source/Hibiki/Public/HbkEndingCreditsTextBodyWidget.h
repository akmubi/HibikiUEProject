#pragma once
#include "CoreMinimal.h"
#include "HbkEndingCreditsComponentBaseWidget.h"
#include "HbkEndingCreditsTextBodyWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkEndingCreditsTextBodyWidget : public UHbkEndingCreditsComponentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTextLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTextMiddle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTextRight;
    
public:
    UHbkEndingCreditsTextBodyWidget();

};

