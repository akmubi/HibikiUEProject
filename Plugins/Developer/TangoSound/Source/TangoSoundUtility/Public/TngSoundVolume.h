#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "TngSoundVolume.generated.h"

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API ATngSoundVolume : public AVolume {
    GENERATED_BODY()
public:
    ATngSoundVolume(const FObjectInitializer& ObjectInitializer);

};

