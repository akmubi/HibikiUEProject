#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkReflectionVolumeComponentTNG.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkReflectionVolumeComponentTNG : public USceneComponent {
    GENERATED_BODY()
public:
    UHbkReflectionVolumeComponentTNG(const FObjectInitializer& ObjectInitializer);

};

