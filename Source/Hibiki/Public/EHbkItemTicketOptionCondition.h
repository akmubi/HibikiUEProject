#pragma once
#include "CoreMinimal.h"
#include "EHbkItemTicketOptionCondition.generated.h"

UENUM(BlueprintType)
enum class EHbkItemTicketOptionCondition : uint8 {
    None,
    PL_Health_10per,
    PL_Health_20per,
    PL_Health_33per,
    PL_Health_50per,
    PL_Health_100per,
    PL_Health_Equal_100per,
};

