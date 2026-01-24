#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkStoreMenuSelectButtonDescriptionWidget.generated.h"

class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkStoreMenuSelectButtonDescriptionWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* DescriptionText;
    
public:
    UHbkStoreMenuSelectButtonDescriptionWidget();

};

