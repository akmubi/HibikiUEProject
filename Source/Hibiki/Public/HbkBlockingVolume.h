#pragma once
#include "CoreMinimal.h"
#include "HbkBlockingVolumeBase.h"
#include "HbkBlockingVolume.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkBlockingVolume : public AHbkBlockingVolumeBase {
    GENERATED_BODY()
public:
    AHbkBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

