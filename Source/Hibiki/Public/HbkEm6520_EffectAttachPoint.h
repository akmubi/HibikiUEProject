#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HbkEm6520_EffectAttachPoint.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6520_EffectAttachPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromLineStart;
    
    HIBIKI_API FHbkEm6520_EffectAttachPoint();
};

