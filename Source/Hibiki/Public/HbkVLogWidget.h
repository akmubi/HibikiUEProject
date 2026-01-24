#pragma once
#include "CoreMinimal.h"
#include "HbkItemGetPopupBaseWidget.h"
#include "HbkVLogWidget.generated.h"

class UImage;
class UScrollBox;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkVLogWidget : public UHbkItemGetPopupBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* DescText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* vlogImage;
    
public:
    UHbkVLogWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetWidgetParts(bool isTextOnly);
    
public:
    UFUNCTION(BlueprintCallable)
    void ScrollSentence(float ScrollWidth);
    
};

