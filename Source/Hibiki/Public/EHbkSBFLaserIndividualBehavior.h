#pragma once
#include "CoreMinimal.h"
#include "EHbkSBFLaserIndividualBehavior.generated.h"

UENUM(BlueprintType)
enum class EHbkSBFLaserIndividualBehavior : uint8 {
    None,
    ForwardRep,
    ReverseRep,
    Tracking,
};

