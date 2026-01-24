#pragma once
#include "CoreMinimal.h"
#include "HbkBlockingVolumeBase.h"
#include "HbkFloorBlockingVolume.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkFloorBlockingVolume : public AHbkBlockingVolumeBase {
    GENERATED_BODY()
public:
    AHbkFloorBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

