#pragma once
#include "CoreMinimal.h"
#include "HbkShadowSpotLight.h"
#include "HbkEnvShadowSpotLight.generated.h"

UCLASS(Blueprintable)
class AHbkEnvShadowSpotLight : public AHbkShadowSpotLight {
    GENERATED_BODY()
public:
    AHbkEnvShadowSpotLight(const FObjectInitializer& ObjectInitializer);

};

