#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_CircuitBoardPrepareSplineInfo_t.h"
#include "HbkGimmick_CircuitBoardPrepareInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_CircuitBoardPrepareInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_CircuitBoardPrepareSplineInfo_t> SplineInfoArray;
    
    HIBIKI_API FHbkGimmick_CircuitBoardPrepareInfo_t();
};

