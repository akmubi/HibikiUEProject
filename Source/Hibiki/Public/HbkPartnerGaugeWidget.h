#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkPartnerGaugeWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkPartnerGaugeWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* SelectAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* NonSelectAnim;
    
public:
    UHbkPartnerGaugeWidget();

};

