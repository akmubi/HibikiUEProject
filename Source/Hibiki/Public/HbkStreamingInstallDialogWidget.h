#pragma once
#include "CoreMinimal.h"
#include "HbkPopupDialogWidget.h"
#include "HbkStreamingInstallDialogWidget.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStreamingInstallDialogWidget : public UHbkPopupDialogWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ProgressTextBlock;
    
public:
    UHbkStreamingInstallDialogWidget();

};

