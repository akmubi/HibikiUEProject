#pragma once
#include "CoreMinimal.h"
#include "EHbkBossUIEventType.generated.h"

UENUM(BlueprintType)
enum class EHbkBossUIEventType : uint8 {
    Invalid,
    KorsicaPhase3RecoveryStart,
    KorsicaPhase3RecoveryEnd,
    KorsicaPhase5FaceChange,
    KorsicaPhase5RecoveryStart,
    KorsicaPhase5RecoveryEnd,
    RoquefortPhase3RecoveryStart,
};

