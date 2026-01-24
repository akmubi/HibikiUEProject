#pragma once
#include "CoreMinimal.h"
#include "HbkBlockingVolumeBase.h"
#include "HbkPhysicsBlockingVolume.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkPhysicsBlockingVolume : public AHbkBlockingVolumeBase {
    GENERATED_BODY()
public:
    AHbkPhysicsBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

