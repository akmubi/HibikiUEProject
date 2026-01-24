#pragma once
#include "CoreMinimal.h"
#include "AkGameObjType.generated.h"

UENUM(BlueprintType)
enum class AkGameObjType : uint8 {
    AkGameObjType_Global,
    AkGameObjType_UI,
};

