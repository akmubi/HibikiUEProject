#pragma once
#include "CoreMinimal.h"
#include "EHbkEndingCreditsTextureType.generated.h"

UENUM(BlueprintType)
enum class EHbkEndingCreditsTextureType : uint8 {
    None,
    TitleLogo,
    UnrealEngineLogo,
    WwiseLogo,
    InstaLODLogo,
    MiddlewareLogo,
};

