#pragma once
#include "CoreMinimal.h"
#include "HbkBlockingVolumeBase.h"
#include "HbkBlockingAndCameraVolume.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkBlockingAndCameraVolume : public AHbkBlockingVolumeBase {
    GENERATED_BODY()
public:
    AHbkBlockingAndCameraVolume(const FObjectInitializer& ObjectInitializer);

};

