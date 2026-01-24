#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerControl.generated.h"

UENUM()
enum class EHbkPlayerControl {
    None,
    Move,
    Jump,
    NormalAttack = 4,
    SecondAttack = 8,
    Parry = 16,
    Camera = 32,
    Dodge = 64,
    PartnerSelect = 128,
    PartnerAction = 256,
    SpecialAttack = 512,
    Magnet = 1024,
    Interact = 2048,
    MoveAll = 67,
    ActionAll = 1106,
    AttackAll = 524,
    ExceptMove = 2012,
    ControlAll = 4095,
    PartnerAll = 384,
    ExceptCamera = 4063,
    ExceptMagnet = 3071,
    ALL = 65535,
};

