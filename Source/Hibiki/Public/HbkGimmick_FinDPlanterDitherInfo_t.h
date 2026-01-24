#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_FinDPlanterDitherInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_FinDPlanterDitherInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ditherMatName;
    
    HIBIKI_API FHbkGimmick_FinDPlanterDitherInfo_t();
};

