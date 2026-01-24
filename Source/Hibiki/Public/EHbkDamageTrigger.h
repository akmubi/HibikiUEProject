#pragma once
#include "CoreMinimal.h"
#include "EHbkDamageTrigger.generated.h"

UENUM(BlueprintType)
enum class EHbkDamageTrigger : uint8 {
    Causer_All,
    Causer_Player,
    Causer_Enemy,
    Causer_Partner,
};

