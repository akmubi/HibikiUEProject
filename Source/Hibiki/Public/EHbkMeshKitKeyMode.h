#pragma once
#include "CoreMinimal.h"
#include "EHbkMeshKitKeyMode.generated.h"

UENUM(BlueprintType)
enum class EHbkMeshKitKeyMode : uint8 {
    UseTag,
    ActivateOwnerTrack,
    DeactivateOwnerTrack,
    InteractOwnerTrack,
};

