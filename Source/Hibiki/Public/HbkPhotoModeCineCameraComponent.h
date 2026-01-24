#pragma once
#include "CoreMinimal.h"
#include "HbkCineCameraComponent.h"
#include "HbkPhotoModeCineCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHbkPhotoModeCineCameraComponent : public UHbkCineCameraComponent {
    GENERATED_BODY()
public:
    UHbkPhotoModeCineCameraComponent();

};

