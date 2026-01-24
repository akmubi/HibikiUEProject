#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TngWidgetKeyAxisMapping.h"
#include "TngWidgetKeyButtonMapping.h"
#include "TngWidgetInputSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class HIBIKI_API UTngWidgetInputSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTngWidgetKeyButtonMapping> KeyButtonMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTngWidgetKeyAxisMapping> KeyAxisMappings;
    
    UTngWidgetInputSettings();

};

