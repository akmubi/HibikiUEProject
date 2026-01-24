#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500ThunderOriginSequentialParam.h"
#include "HbkEm7500ThunderOriginLinearParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500ThunderOriginLinearParam : public FHbkEm7500ThunderOriginSequentialParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistanceMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistanceInterval;
    
    HIBIKI_API FHbkEm7500ThunderOriginLinearParam();
};

