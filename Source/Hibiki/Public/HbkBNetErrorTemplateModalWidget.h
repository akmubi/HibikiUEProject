#pragma once
#include "CoreMinimal.h"
#include "HbkBNetConnectionErrorModalWidget.h"
#include "HbkBNetErrorTemplateModalWidget.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetErrorTemplateModalWidget : public UHbkBNetConnectionErrorModalWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* BodyTextBlock;
    
public:
    UHbkBNetErrorTemplateModalWidget();

};

