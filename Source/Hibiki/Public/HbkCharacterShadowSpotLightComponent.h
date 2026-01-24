#pragma once
#include "CoreMinimal.h"
#include "HbkShadowSpotLightComponent.h"
#include "HbkCharacterShadowSpotLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkCharacterShadowSpotLightComponent : public UHbkShadowSpotLightComponent {
    GENERATED_BODY()
public:
    UHbkCharacterShadowSpotLightComponent(const FObjectInitializer& ObjectInitializer);

};

