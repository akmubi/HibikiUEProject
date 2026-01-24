#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000SpotlightAngleParam.h"
#include "HbkEm5000SpotlightParameter.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm5000SpotlightParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000SpotlightAngleParam InnerConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000SpotlightAngleParam OuterConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEm5000SpotlightAngleParam FogOpacity;
    
    FHbkEm5000SpotlightParameter();
};

