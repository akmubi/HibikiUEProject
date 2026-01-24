#include "HbkGimmick_SplineMoveControl.h"

AHbkGimmick_SplineMoveControl::AHbkGimmick_SplineMoveControl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bSaveActivate = false;
    this->CargoNoCollision = false;
    this->CargoCastShadow = true;
    this->CargoStaticMeshShadowType = EHbkEnvShadowType::NotSet;
    this->CargoSkeletalMeshShadowType = EHbkCharacterShadowType::CapsuleShadow;
    this->CargoDynamicShadowMapType = EHbkDynamicShadowMapType::DynamicShadowMapType3;
    this->CopySplineActor = NULL;
}

void AHbkGimmick_SplineMoveControl::RemoveSplineMoveChildActor() {
}

void AHbkGimmick_SplineMoveControl::OnNoteWhole_SplineMoveControl(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SplineMoveControl::OnNoteQuarter_SplineMoveControl(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SplineMoveControl::OnNoteHalf_SplineMoveControl(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SplineMoveControl::OnNote8th_SplineMoveControl(int32 NoteCount, bool bDownBeat) {
}

void AHbkGimmick_SplineMoveControl::OnNote16th_SplineMoveControl(int32 NoteCount, bool bDownBeat) {
}


