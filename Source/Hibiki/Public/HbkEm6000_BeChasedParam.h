#pragma once
#include "CoreMinimal.h"
#include "HbkEm6000_BeChasedParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_BeChasedParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LimitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MonitoringRange;
    
    HIBIKI_API FHbkEm6000_BeChasedParam();
};

