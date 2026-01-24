#pragma once
#include "CoreMinimal.h"
#include "EHbkGameAgentMatchType.generated.h"

UENUM(BlueprintType)
enum class EHbkGameAgentMatchType : uint8 {
    HasAny,
    HasAll,
    Equal,
};

