#pragma once
#include "CoreMinimal.h"
#include "EHbkTakeDamagePresetCategory.generated.h"

UENUM(BlueprintType)
enum class EHbkTakeDamagePresetCategory : uint8 {
    Any,
    Player,
    Enemy,
    Npc,
    Object,
    ForPartner01,
    ForPartner02,
    ForPartner03,
};

