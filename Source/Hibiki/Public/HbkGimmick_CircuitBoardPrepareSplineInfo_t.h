#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmick_LightEmissiveColorType_t.h"
#include "HbkGimmick_CircuitBoardPrepareSplineInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_CircuitBoardPrepareSplineInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SplineComponentNameArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHbkGimmick_LightEmissiveColorType_t> ColorType;
    
    HIBIKI_API FHbkGimmick_CircuitBoardPrepareSplineInfo_t();
};

