#pragma once
#include "CoreMinimal.h"
#include "EEm7500PartnerReactionType.generated.h"

UENUM(BlueprintType)
enum class EEm7500PartnerReactionType : uint8 {
    None,
    PEP_KaleGuard,
    PEP_SArmGuard,
    PEP_BArmDown,
    MAC_KaleLeave,
    MAC_DamageDebuff,
    MAC_SArmCancelLeave,
    KOR_NormalHit,
    KOR_TornadeHoming,
    KOR_KaleLeave,
    KOR_KaleLeaveAndArmReady,
    Max,
};

