#pragma once
#include "CoreMinimal.h"
#include "EHbkHowToPlayCategory.generated.h"

UENUM(BlueprintType)
enum class EHbkHowToPlayCategory : uint8 {
    None,
    About_Hibiki,
    About_Item,
    About_Attack,
    About_Dodge,
    About_RhythmMeter,
    About_StunGauge,
    About_CommandList,
    About_StageGimmick,
    About_PartnerAttack,
    About_Parry,
    About_Tips,
    About_BeatHit,
    About_HideOut,
    About_Magnet,
    MAX,
};

