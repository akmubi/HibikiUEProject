#pragma once
#include "CoreMinimal.h"
#include "EEm7500BattleState.generated.h"

UENUM(BlueprintType)
enum class EEm7500BattleState : uint8 {
    BattleState_Intro,
    BattleState_808,
    BattleState_Phase1_1,
    BattleState_Phase1_2,
    BattleState_Phase2,
    BattleState_Phase3_1,
    BattleState_Phase3_2,
    BattleState_Phase3_RP,
    BattleState_Exit,
    BattleState_Ending,
};

