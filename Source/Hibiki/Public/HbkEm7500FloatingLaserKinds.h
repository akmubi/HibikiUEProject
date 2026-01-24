#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500FloatingLaserRequestInfo.h"
#include "HbkEm7500FloatingLaserKinds.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm7500FloatingLaserKinds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500FloatingLaserRequestInfo> RequestInfo;
    
    FHbkEm7500FloatingLaserKinds();
};

