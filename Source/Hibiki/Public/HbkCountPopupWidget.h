#pragma once
#include "CoreMinimal.h"
#include "HbkItemGetPopupBaseWidget.h"
#include "HbkNoticePopupWidgetInterface.h"
#include "HbkCountPopupWidget.generated.h"

class UHorizontalBox;
class UTngRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkCountPopupWidget : public UHbkItemGetPopupBaseWidget, public IHbkNoticePopupWidgetInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* AllFoundText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* OnePartDescText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* MaxPartsCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTngRichTextBlock* NowPartsCountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* PartsCountBase;
    
public:
    UHbkCountPopupWidget();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void OnFinishWidget() override PURE_VIRTUAL(OnFinishWidget,);
    
};

