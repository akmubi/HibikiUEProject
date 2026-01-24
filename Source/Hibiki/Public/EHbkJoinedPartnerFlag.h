#pragma once
#include "CoreMinimal.h"
#include "EHbkJoinedPartnerFlag.generated.h"

UENUM(BlueprintType)
enum class EHbkJoinedPartnerFlag : uint8 {
    None,
    Partner_808,
    Partner_Peppermint,
    Partner_Macaron = 4,
    Partner_Korsica = 8,
    Partner_CNMN = 16,
};

