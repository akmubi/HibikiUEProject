#pragma once
#include "CoreMinimal.h"
#include "HbkBNetButtonWidget.h"
#include "HbkBNetLinkButtonWidget.generated.h"

class UImage;
class UOverlay;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetLinkButtonWidget : public UHbkBNetButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TitleTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LabelUnderlineImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* LabelOverlay;
    
public:
    UHbkBNetLinkButtonWidget();

};

