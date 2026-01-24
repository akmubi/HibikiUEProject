#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "TngRichTextBlockImageDecoratorBase.generated.h"

class UTngRichTextBlock;

UCLASS(Abstract, Blueprintable)
class TANGORICHTEXTBLOCK_API UTngRichTextBlockImageDecoratorBase : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* OwnerRichTextBlock;
    
public:
    UTngRichTextBlockImageDecoratorBase();

};

