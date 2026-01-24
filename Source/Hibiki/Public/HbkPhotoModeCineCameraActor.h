#pragma once
#include "CoreMinimal.h"
#include "HbkCineCameraActor.h"
#include "HbkPhotoModeCineCameraActor.generated.h"

UCLASS(Blueprintable)
class AHbkPhotoModeCineCameraActor : public AHbkCineCameraActor {
    GENERATED_BODY()
public:
    AHbkPhotoModeCineCameraActor(const FObjectInitializer& ObjectInitializer);

};

