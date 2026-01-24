#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "TngRichTextBlockInlineDecorator.generated.h"

class UTngRichTextBlock;

UCLASS(Blueprintable)
class TANGORICHTEXTBLOCK_API UTngRichTextBlockInlineDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* OwnerRichTextBlock;
    
public:
    UTngRichTextBlockInlineDecorator();

};

