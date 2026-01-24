#pragma once
#include "CoreMinimal.h"
#include "EHbkReverbGaugeConsumeType.generated.h"

UENUM(BlueprintType)
enum class EHbkReverbGaugeConsumeType : uint8 {
    None,
    Consume_SpecialAttack,
    Consume_JamCombo,
    Consume_QuickCallPartner,
    Convert_ToScore,
};

