#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkDecalLightVolumeComponentTNG.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkDecalLightVolumeComponentTNG : public USceneComponent {
    GENERATED_BODY()
public:
    UHbkDecalLightVolumeComponentTNG(const FObjectInitializer& ObjectInitializer);

};

