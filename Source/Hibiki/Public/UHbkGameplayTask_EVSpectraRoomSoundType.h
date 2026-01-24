#pragma once
#include "CoreMinimal.h"
#include "UHbkGameplayTask_EVSpectraRoomSoundType.generated.h"

UENUM(BlueprintType)
enum class UHbkGameplayTask_EVSpectraRoomSoundType : uint8 {
    Start,
    StartBattle,
    EndBattle,
    Return,
};

