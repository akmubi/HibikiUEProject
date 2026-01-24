#pragma once
#include "CoreMinimal.h"
#include "EHbkOptionListItemKeyAssignmentType.generated.h"

UENUM(BlueprintType)
enum class EHbkOptionListItemKeyAssignmentType : uint8 {
    None,
    MoveForward,
    MoveBackward,
    MoveLeft,
    MoveRight,
    LightAttack,
    HeavyAttack,
    Jump,
    Parry,
    Interact,
    Dodge,
    Magnet,
    PartnerSelect,
    PartnerAction,
    SpecialAttackSelect,
    SpecialAttack,
    SpecialAttack_L,
    SpecialAttack_R,
    UseOverCharge,
    Pause,
    RhythmAssist,
    HintButton,
    Max,
};

