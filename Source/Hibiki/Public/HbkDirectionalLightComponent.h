#pragma once
#include "CoreMinimal.h"
#include "Components/DirectionalLightComponent.h"
#include "HbkDirectionalLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkDirectionalLightComponent : public UDirectionalLightComponent {
    GENERATED_BODY()
public:
    UHbkDirectionalLightComponent(const FObjectInitializer& ObjectInitializer);

};

