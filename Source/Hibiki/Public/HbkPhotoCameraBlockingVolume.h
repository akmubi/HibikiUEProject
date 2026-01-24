#pragma once
#include "CoreMinimal.h"
#include "HbkBlockingVolumeBase.h"
#include "HbkPhotoCameraBlockingVolume.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkPhotoCameraBlockingVolume : public AHbkBlockingVolumeBase {
    GENERATED_BODY()
public:
    AHbkPhotoCameraBlockingVolume(const FObjectInitializer& ObjectInitializer);

};

