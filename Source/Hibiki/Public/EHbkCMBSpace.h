#pragma once
#include "CoreMinimal.h"
#include "EHbkCMBSpace.generated.h"

UENUM(BlueprintType)
enum class EHbkCMBSpace : uint8 {
    ComponentSpace,
    WorldSpace,
    AttachParentComponentSpace,
};

