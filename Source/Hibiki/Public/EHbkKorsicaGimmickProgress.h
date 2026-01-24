#pragma once
#include "CoreMinimal.h"
#include "EHbkKorsicaGimmickProgress.generated.h"

UENUM(BlueprintType)
enum class EHbkKorsicaGimmickProgress : uint8 {
    None,
    Clear,
    Playing,
    Failed,
};

