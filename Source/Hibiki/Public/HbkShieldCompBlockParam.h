#pragma once
#include "CoreMinimal.h"
#include "HbkShieldCompBlockParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkShieldCompBlockParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockableYawRangeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockableYawRangeMax;
    
    HIBIKI_API FHbkShieldCompBlockParam();
};

