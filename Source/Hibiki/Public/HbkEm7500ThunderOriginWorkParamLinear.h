#pragma once
#include "CoreMinimal.h"
#include "HbkEm7500ThunderOriginLinearParam.h"
#include "HbkEm7500ThunderOriginWorkParamBase.h"
#include "HbkEm7500ThunderOriginWorkParamLinear.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm7500ThunderOriginWorkParamLinear : public FHbkEm7500ThunderOriginWorkParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm7500ThunderOriginLinearParam LinearParam;
    
    HIBIKI_API FHbkEm7500ThunderOriginWorkParamLinear();
};

