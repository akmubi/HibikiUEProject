#pragma once
#include "CoreMinimal.h"
#include "EHbkTrainingRoomSettingType.generated.h"

UENUM(BlueprintType)
enum class EHbkTrainingRoomSettingType : uint8 {
    None,
    Command,
    EnemyAI,
    RecoverReverbGauge,
    EnemyType,
    VisibleEnemyHPbar,
    DontDieEnemy,
    VisibleRhythmAssist,
    MusicTempo,
};

