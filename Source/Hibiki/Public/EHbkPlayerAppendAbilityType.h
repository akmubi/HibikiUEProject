#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerAppendAbilityType.generated.h"

UENUM(BlueprintType)
enum class EHbkPlayerAppendAbilityType : uint8 {
    None,
    Action_BeatHit,
    Action_SPAttack,
    Action_Dodge,
    Action_AirDodge,
    Action_RhythmDodge,
    Action_Magnet,
    Action_MagnetBackstab,
    Action_Parry,
    Action_AirParry,
    Action_DirectionalParry,
    Action_PartnerCall,
};

