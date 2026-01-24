#pragma once
#include "CoreMinimal.h"
#include "HbkBlockingVolumeBase.h"
#include "HbkFloorBlockingAndCameraVolume.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkFloorBlockingAndCameraVolume : public AHbkBlockingVolumeBase {
    GENERATED_BODY()
public:
    AHbkFloorBlockingAndCameraVolume(const FObjectInitializer& ObjectInitializer);

};

