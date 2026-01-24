#include "HbkGimmick_MagnetRailCommon.h"

AHbkGimmick_MagnetRailCommon::AHbkGimmick_MagnetRailCommon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FTransform AHbkGimmick_MagnetRailCommon::GetWorldTransformAtDistanceAlongSpline(UTngSplineComponent* Spline, float Distance) {
    return FTransform{};
}

float AHbkGimmick_MagnetRailCommon::GetDistanceAtNoteCount(float Speed, int32 NoteCount, EHbkNote HbkNote, float BPM) {
    return 0.0f;
}


