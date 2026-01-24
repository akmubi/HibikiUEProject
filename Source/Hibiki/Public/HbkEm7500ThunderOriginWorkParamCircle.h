#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500ThunderOriginCircleParam.h"
#include "HbkEm7500ThunderOriginWorkParamBase.h"
#include "HbkEm7500ThunderOriginWorkParamCircle.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500ThunderOriginWorkParamCircle : public FHbkEm7500ThunderOriginWorkParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500ThunderOriginCircleParam CircleParam;
    
    HIBIKI_API FHbkEm7500ThunderOriginWorkParamCircle();
};

