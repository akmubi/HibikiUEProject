#pragma once
#include "CoreMinimal.h"
#include "HbkEndingCreditsComponentBaseWidget.h"
#include "HbkEndingCreditsTextWithTitleWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkEndingCreditsTextWithTitleWidget : public UHbkEndingCreditsComponentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTextTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* LabelTextBody;
    
public:
    UHbkEndingCreditsTextWithTitleWidget();

};

