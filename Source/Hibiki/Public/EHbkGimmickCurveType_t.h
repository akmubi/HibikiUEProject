#pragma once
#include "CoreMinimal.h"
#include "EHbkGimmickCurveType_t.generated.h"

UENUM(BlueprintType)
enum class EHbkGimmickCurveType_t : uint8 {
    GimmickCurve_HitIn,
    GimmickCurve_HitIn2,
    GimmickCurve_PureHitIn,
    GimmickCurve_Pulse,
    GimmickCurve_HitOut,
    GimmickCurve_HitOutImmediate,
    GimmickCurve_HitOutSmooth,
    GimmickCurve_HitOutSmoothOneBeat,
    GimmickCurve_HitOutStrong,
    GimmickCurve_Button,
    GimmickCurve_Flat,
    GimmickCurve_PureFlat,
    GimmickCurve_SplinePointMoveCurve,
    GimmickCurve_ScaleCurve,
    GimmickCurve_ScaleDelayCurve,
    GimmickCurve_Pendulum,
};

