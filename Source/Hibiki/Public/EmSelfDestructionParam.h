#pragma once
#include "CoreMinimal.h"
#include "EmSelfDestructionParam.generated.h"

USTRUCT(BlueprintType)
struct FEmSelfDestructionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbabilitySelfDestruction;
    
    HIBIKI_API FEmSelfDestructionParam();
};

