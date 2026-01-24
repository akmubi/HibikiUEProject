#pragma once
#include "CoreMinimal.h"
#include "EHbkNoticePopupType.generated.h"

UENUM(BlueprintType)
enum class EHbkNoticePopupType : uint8 {
    GeneralMsg,
    Submission,
    FoundGraffiti,
    ItemGet,
    HideOutChallenge,
    Max,
};

