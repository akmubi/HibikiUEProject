#pragma once
#include "CoreMinimal.h"
#include "HbkBNetLinkButtonWidget.h"
#include "HbkBNetLinkButtonExWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBNetLinkButtonExWidget : public UHbkBNetLinkButtonWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DescriptionTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DescriptionWrapTextAt;
    
public:
    UHbkBNetLinkButtonExWidget();

};

