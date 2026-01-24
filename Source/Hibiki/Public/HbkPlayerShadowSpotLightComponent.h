#pragma once
#include "CoreMinimal.h"
#include "HbkShadowSpotLightComponent.h"
#include "HbkPlayerShadowSpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerShadowSpotLightComponent : public UHbkShadowSpotLightComponent {
    GENERATED_BODY()
public:
    UHbkPlayerShadowSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

