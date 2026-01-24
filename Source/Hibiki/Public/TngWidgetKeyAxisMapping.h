#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "ETngKeyAxisMap.h"
#include "TngWidgetKeyAxisMapping.generated.h"

USTRUCT(BlueprintType)
struct FTngWidgetKeyAxisMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETngKeyAxisMap Axis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadZone;
    
    HIBIKI_API FTngWidgetKeyAxisMapping();
};

