#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "HbkCameraActorBase.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkCameraActorBase : public ACameraActor {
    GENERATED_BODY()
public:
    AHbkCameraActorBase(const FObjectInitializer& ObjectInitializer);

};

