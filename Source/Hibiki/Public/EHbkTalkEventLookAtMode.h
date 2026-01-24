#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkEventLookAtMode.generated.h"

UENUM(BlueprintType)
enum class EHbkTalkEventLookAtMode : uint8 {
    None,
    Face,
    FaceAndSpine,
    Neutral,
};

