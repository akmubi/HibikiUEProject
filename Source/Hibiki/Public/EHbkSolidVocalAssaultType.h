#pragma once
#include "CoreMinimal.h"
#include "EHbkSolidVocalAssaultType.generated.h"

UENUM(BlueprintType)
enum class EHbkSolidVocalAssaultType : uint8 {
    OnceEveryOtherBeat,
    SameTime,
    SameTimeInTwo,
    OnceEvery8thNote,
    OnceEverySignal,
    CustomOnceEvery,
    CustomSameTime,
    CustomSameTimeInTwo,
    CustomSameTimeInFour,
    CustomSameTimeInTwoLinear,
    Num,
};

