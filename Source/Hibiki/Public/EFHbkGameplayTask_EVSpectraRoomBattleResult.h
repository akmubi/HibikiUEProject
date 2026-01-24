#pragma once
#include "CoreMinimal.h"
#include "EFHbkGameplayTask_EVSpectraRoomBattleResult.generated.h"

UENUM(BlueprintType)
enum class EFHbkGameplayTask_EVSpectraRoomBattleResult : uint8 {
    ChallengeImpossible,
    CancelChallenge,
    BattleSuccess,
    BattleFailed,
};

