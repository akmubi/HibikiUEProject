#pragma once
#include "CoreMinimal.h"
#include "HbkGameEnvStateBlendParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkGameEnvStateBlendParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendDuration;
    
    HIBIKI_API FHbkGameEnvStateBlendParam();
};

