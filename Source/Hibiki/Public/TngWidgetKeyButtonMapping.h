#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ETngKeyButtonMap.h"
#include "TngWidgetKeyButtonMapping.generated.h"

USTRUCT(BlueprintType)
struct FTngWidgetKeyButtonMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngKeyButtonMap Button;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    HIBIKI_API FTngWidgetKeyButtonMapping();
};

