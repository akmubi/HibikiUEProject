#pragma once
#include "CoreMinimal.h"
#include "EHbkNp0900_StateType.generated.h"

UENUM(BlueprintType)
enum class EHbkNp0900_StateType : uint8 {
    Idle,
    Action,
    Damage,
};

