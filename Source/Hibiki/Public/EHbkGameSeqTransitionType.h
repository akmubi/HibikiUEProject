#pragma once
#include "CoreMinimal.h"
#include "EHbkGameSeqTransitionType.generated.h"

UENUM(BlueprintType)
enum class EHbkGameSeqTransitionType : uint8 {
    None,
    TransitionLevel,
    BackToHideout,
    LoadCheckpoint,
    KeepStageProgress,
    LoadGame,
};

