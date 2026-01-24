#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkBPMRushWidgetData.generated.h"

class UHbkBPMRushGaugeWidget;
class UHbkBPMRushResultWidget;
class UHbkBPMRushStartWidget;

USTRUCT(BlueprintType)
struct FHbkBPMRushWidgetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBPMRushStartWidget> StartWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBPMRushResultWidget> ResultWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBPMRushGaugeWidget> GaugeWidgetClass;
    
    HIBIKI_API FHbkBPMRushWidgetData();
};

