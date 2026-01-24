#include "HbkGimmick_bg0240.h"

AHbkGimmick_bg0240::AHbkGimmick_bg0240(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bMoveSave = false;
}

void AHbkGimmick_bg0240::OnMoveEnd() {
}

void AHbkGimmick_bg0240::OnLoadSuccessForSplineMove() {
}

void AHbkGimmick_bg0240::OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkGimmick_bg0240::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_bg0240::OnCommonResourceSuccess() {
}

void AHbkGimmick_bg0240::OnBeatSyncActivate(int32 NoteCount, bool downBeat) {
}


