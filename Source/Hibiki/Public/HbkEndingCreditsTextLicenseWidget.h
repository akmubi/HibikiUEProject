#pragma once
#include "CoreMinimal.h"
#include "HbkEndingCreditsComponentBaseWidget.h"
#include "HbkEndingCreditsTextLicenseWidget.generated.h"

class UHbkEndingCreditsTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkEndingCreditsTextLicenseWidget : public UHbkEndingCreditsComponentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkEndingCreditsTextBlock* LabelText;
    
public:
    UHbkEndingCreditsTextLicenseWidget();

};

