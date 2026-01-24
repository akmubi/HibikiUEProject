#pragma once
#include "CoreMinimal.h"
#include "EHbkTakeDamageActorType.generated.h"

UENUM(BlueprintType)
enum class EHbkTakeDamageActorType : uint8 {
    None,
    Player,
    Enemy,
    Peppermint,
    Macaron,
    Korsica,
    Other,
};

