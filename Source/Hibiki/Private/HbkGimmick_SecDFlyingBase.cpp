#include "HbkGimmick_SecDFlyingBase.h"

AHbkGimmick_SecDFlyingBase::AHbkGimmick_SecDFlyingBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bBackMove = false;
    this->SaveType = EHbkGimmick_SecDFlyingBaseSaveType::SFB_SAVE_NONE;
    this->MoveZCurveType = EHbkGimmickCurveType_t::GimmickCurve_HitIn;
    this->FarRange = 0.00f;
    this->FarRangeHeight = 0.00f;
    this->FarRange_OnMoveEnd = 0.00f;
    this->FarRangeHeight_OnMoveEnd = 0.00f;
    this->NearRange = 0.00f;
    this->NearRangeHeight = 0.00f;
    this->pReactionSE = NULL;
}

void AHbkGimmick_SecDFlyingBase::OnMoveEnd() {
}

void AHbkGimmick_SecDFlyingBase::OnLoadSuccessForSplineMove() {
}

void AHbkGimmick_SecDFlyingBase::OnInterpMoveEnded() {
}

void AHbkGimmick_SecDFlyingBase::OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkGimmick_SecDFlyingBase::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_SecDFlyingBase::OnBeatEvent_SecDFlyingBase(int32 NoteCount, bool bDownBeat) {
}

bool AHbkGimmick_SecDFlyingBase::CanForceMove(bool Reverse) {
    return false;
}


