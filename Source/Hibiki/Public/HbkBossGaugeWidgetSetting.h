#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkBossGaugeWidgetSetting.generated.h"

class UHbkBossGageBaseWidget;

USTRUCT(BlueprintType)
struct FHbkBossGaugeWidgetSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkBossGageBaseWidget> GaugeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawType;
    
    HIBIKI_API FHbkBossGaugeWidgetSetting();
};

