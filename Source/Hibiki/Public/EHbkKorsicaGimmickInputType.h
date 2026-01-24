#pragma once
#include "CoreMinimal.h"
#include "EHbkKorsicaGimmickInputType.generated.h"

UENUM(BlueprintType)
enum class EHbkKorsicaGimmickInputType : uint8 {
    None,
    Just,
    Good,
    Failed,
};

