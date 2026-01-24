#pragma once
#include "CoreMinimal.h"
#include "EHbkFullScreenMovieManualStopType.generated.h"

UENUM(BlueprintType)
enum class EHbkFullScreenMovieManualStopType : uint8 {
    None,
    Default,
    Sequencer,
    All,
};

