#pragma once
#include "CoreMinimal.h"
#include "EHbkHideOutChallengeNoDamageJudgeType.generated.h"

UENUM(BlueprintType)
enum class EHbkHideOutChallengeNoDamageJudgeType : uint8 {
    St01_BossNoDamage,
    St02_MagnetRailNoDamage,
    St02_BossNoDamage,
    St03_VolcanicBombNoDamage,
    St04_VolcanicBombNoDamage,
    St04_EscapePartNoDamage,
    St07_ElectricTrapBattleNoDamage,
    St08_BossNoDamage,
    St12_BossNoDamage,
    Max,
};

