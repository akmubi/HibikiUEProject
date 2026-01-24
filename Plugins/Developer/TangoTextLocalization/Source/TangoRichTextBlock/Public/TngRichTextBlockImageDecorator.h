#pragma once
#include "CoreMinimal.h"
#include "TngRichTextBlockImageDecoratorBase.h"
#include "TngRichTextBlockImageDecorator.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TANGORICHTEXTBLOCK_API UTngRichTextBlockImageDecorator : public UTngRichTextBlockImageDecoratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ImageSet;
    
public:
    UTngRichTextBlockImageDecorator();

};

