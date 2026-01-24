#pragma once
#include "CoreMinimal.h"
#include "HbkBossGiveDamageRateWithTag.h"
#include "HbkBossAdjustParameter.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossAdjustParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBossGiveDamageRateWithTag> GiveDamageRate;
    
    FHbkBossAdjustParameter();
};

