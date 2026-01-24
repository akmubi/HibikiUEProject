#pragma once
#include "CoreMinimal.h"
#include "EHbkMGRhythmDungeon_TutorialType.generated.h"

UENUM(BlueprintType)
enum class EHbkMGRhythmDungeon_TutorialType : uint8 {
    None,
    HowToPlay,
    Growth,
    StartPerform,
    GameOverDialog,
};

