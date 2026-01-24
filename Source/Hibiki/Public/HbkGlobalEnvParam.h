#pragma once
#include "CoreMinimal.h"
#include "HbkGlobalEnvParam.generated.h"

class AHbkCineToonShadingLight;
class ALight;

USTRUCT(BlueprintType)
struct FHbkGlobalEnvParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ALight* SceneShadowSpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkCineToonShadingLight* CineToonShadingLight;
    
    HIBIKI_API FHbkGlobalEnvParam();
};

