#pragma once
#include "CoreMinimal.h"
#include "HbkDamageCorrectionParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkDamageCorrectionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageRate;
    
    FHbkDamageCorrectionParam();
};

