#pragma once
#include "CoreMinimal.h"
#include "EHbkTalkCmdType.generated.h"

UENUM(BlueprintType)
enum class EHbkTalkCmdType : uint8 {
    TCMD_None,
    TCMD_Choices,
    TCMD_808COM,
    TCMD_GameFlagBR,
    TCMD_RandomBR,
    TCMD_GameFlagCLR,
    TCMD_ContextSub,
};

