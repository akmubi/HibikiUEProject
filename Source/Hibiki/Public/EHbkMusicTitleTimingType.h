#pragma once
#include "CoreMinimal.h"
#include "EHbkMusicTitleTimingType.generated.h"

UENUM(BlueprintType)
enum class EHbkMusicTitleTimingType : uint8 {
    Opening,
    ST01_PA,
    ST01_FirstBattle,
    ST01_Scroll,
    ST01_Boss,
    ST02_Start,
    ST02_Second,
    ST02_Boss,
    ST02_EndStage,
    ST03_First,
    ST03_Second,
    ST04_Start,
    ST04_AR3,
    ST04_Escape,
    ST05_Stage,
    ST05b_Lift,
    ST06_Stage,
    ST06_Boss,
    ST07_First,
    ST07_Second,
    ST08_Stage,
    ST08_Boss,
    ST10_Cannon,
    ST10_Dining,
    ST10_Atrium,
    ST10_Boss,
    ST11_Start,
    ST11_Tag,
    ST11_Rhythm,
    ST12_Boss,
    Ending,
    BPMRush_First,
    BPMRush_Second,
    BPMRush_Third,
    BPMRush_Fourth,
    BPMRush_Fifth,
};

