#pragma once
#include "CoreMinimal.h"
#include "HbkHowtoPlayItemBaseWidget.h"
#include "HbkHowtoPlayItemCellWidget.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkHowtoPlayItemCellWidget : public UHbkHowtoPlayItemBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* SelectText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* UnSelectText;
    
public:
    UHbkHowtoPlayItemCellWidget();

};

