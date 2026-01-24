#pragma once
#include "CoreMinimal.h"
#include "AkComponentOcclusionCollisionChannelType.generated.h"

UENUM(BlueprintType)
enum class AkComponentOcclusionCollisionChannelType : uint8 {
    Sound,
    SoundNoOcclusion,
    SoundObject,
};

