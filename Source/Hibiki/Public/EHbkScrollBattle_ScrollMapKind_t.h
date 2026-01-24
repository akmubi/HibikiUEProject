#pragma once
#include "CoreMinimal.h"
#include "EHbkScrollBattle_ScrollMapKind_t.generated.h"

UENUM(BlueprintType)
enum EHbkScrollBattle_ScrollMapKind_t {
    SCROLL_RESIDENT,
    SCROLL_STRAIGHT,
    SCROLL_LEFTCURVE,
    SCROLL_RIGHTCURVE,
    SCROLL_UPCURVE,
    SCROLL_DOWNCURVE,
    SCROLL_ELEDOWN,
    SCROLL_MAPMAX,
};

