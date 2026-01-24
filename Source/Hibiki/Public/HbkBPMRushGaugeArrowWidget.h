#pragma once
#include "CoreMinimal.h"
#include "HbkUserWidget.h"
#include "HbkBPMRushGaugeArrowWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class HIBIKI_API UHbkBPMRushGaugeArrowWidget : public UHbkUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ArrowUpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ArrowDownAnimation;
    
public:
    UHbkBPMRushGaugeArrowWidget();

};

