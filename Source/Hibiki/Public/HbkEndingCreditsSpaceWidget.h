#pragma once
#include "CoreMinimal.h"
#include "HbkEndingCreditsComponentBaseWidget.h"
#include "HbkEndingCreditsSpaceWidget.generated.h"

class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkEndingCreditsSpaceWidget : public UHbkEndingCreditsComponentBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* MainSpacer;
    
public:
    UHbkEndingCreditsSpaceWidget();

};

