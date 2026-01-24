#pragma once
#include "CoreMinimal.h"
#include "HbkShieldCompBlockParam.h"
#include "HbkShieldCompInitParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkShieldCompInitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurableValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockableYawRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMultiZoneBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkShieldCompBlockParam> BlockZoneParams;
    
    HIBIKI_API FHbkShieldCompInitParam();
};

