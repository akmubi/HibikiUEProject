#pragma once
#include "CoreMinimal.h"
#include "EHbkGameEnvBlendOption.h"
#include "HbkGameEnvBlendWeight.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FHbkGameEnvBlendWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkGameEnvBlendOption BlendOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCurve;
    
    HIBIKI_API FHbkGameEnvBlendWeight();
};

