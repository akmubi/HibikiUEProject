#pragma once
#include "CoreMinimal.h"
#include "EHbkRhythmDungeonChallengeController_ShopState.generated.h"

UENUM(BlueprintType)
enum class EHbkRhythmDungeonChallengeController_ShopState : uint8 {
    Shop_InActive,
    Shop_Active,
    Shop_Open,
    Shop_End,
};

