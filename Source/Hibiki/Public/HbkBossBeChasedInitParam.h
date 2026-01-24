#pragma once
#include "CoreMinimal.h"
#include "HbkBossBeChasedInitParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossBeChasedInitParam {
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
    
    HIBIKI_API FHbkBossBeChasedInitParam();
};

