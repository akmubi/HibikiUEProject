#pragma once
#include "CoreMinimal.h"
#include "HbkSpotLight.h"
#include "HbkCinematicShadowSpotLight.generated.h"

UCLASS(Blueprintable)
class AHbkCinematicShadowSpotLight : public AHbkSpotLight {
    GENERATED_BODY()
public:
    AHbkCinematicShadowSpotLight(const FObjectInitializer& ObjectInitializer);

};

