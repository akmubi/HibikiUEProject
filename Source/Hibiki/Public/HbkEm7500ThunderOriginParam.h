#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500ThunderOriginCircleParam.h"
#include "HbkEm7500ThunderOriginLinearParam.h"
#include "HbkEm7500ThunderOriginParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500ThunderOriginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500ThunderOriginLinearParam> LinearParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500ThunderOriginCircleParam> CircleParams;
    
    HIBIKI_API FHbkEm7500ThunderOriginParam();
};

