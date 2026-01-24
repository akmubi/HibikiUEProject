#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkSoloLightingVolumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkSoloLightingVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHbkSoloLightingVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

