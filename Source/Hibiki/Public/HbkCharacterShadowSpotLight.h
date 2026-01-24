#pragma once
#include "CoreMinimal.h"
#include "HbkShadowSpotLight.h"
#include "HbkCharacterShadowSpotLight.generated.h"

UCLASS(Blueprintable)
class AHbkCharacterShadowSpotLight : public AHbkShadowSpotLight {
    GENERATED_BODY()
public:
    AHbkCharacterShadowSpotLight(const FObjectInitializer& ObjectInitializer);

};

