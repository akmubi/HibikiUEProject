#include "HbkGimmick_GiantRobotBeam.h"

AHbkGimmick_GiantRobotBeam::AHbkGimmick_GiantRobotBeam(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bAutoDeactivate = false;
    this->NoteType = EHbkNote::Note_Quarter;
    this->ScaleUpCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn2;
    this->ScaleDownCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn2;
    this->LifeSpanNoteCount = 0;
    this->GameEnvTime = 1.00f;
    this->LoopCameraShakeTask = NULL;
}


