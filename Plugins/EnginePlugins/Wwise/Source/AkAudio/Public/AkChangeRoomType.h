#pragma once
#include "CoreMinimal.h"
#include "AkChangeRoomType.generated.h"

UENUM(BlueprintType)
enum class AkChangeRoomType : uint8 {
    Always,
    Once,
    SameDefaultListener,
};

