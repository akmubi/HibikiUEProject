#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_VolcaneEruptionPattern.h"
#include "HbkGimmick_VolcaneEruptionPatternOrder.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneEruptionPatternOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkGimmick_VolcaneEruptionPattern> Patterns;
    
    HIBIKI_API FHbkGimmick_VolcaneEruptionPatternOrder();
};

