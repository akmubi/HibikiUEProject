#pragma once
#include "CoreMinimal.h"
#include "HbkShadowSpotLightComponent.h"
#include "HbkEnvShadowSpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkEnvShadowSpotLightComponent : public UHbkShadowSpotLightComponent {
    GENERATED_BODY()
public:
    UHbkEnvShadowSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

