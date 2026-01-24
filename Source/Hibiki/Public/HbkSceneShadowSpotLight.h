#pragma once
#include "CoreMinimal.h"
#include "HbkSpotLight.h"
#include "HbkSceneShadowSpotLight.generated.h"

UCLASS(Blueprintable)
class AHbkSceneShadowSpotLight : public AHbkSpotLight {
    GENERATED_BODY()
public:
    AHbkSceneShadowSpotLight(const FObjectInitializer& ObjectInitializer);

};

