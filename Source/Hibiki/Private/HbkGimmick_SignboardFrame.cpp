#include "HbkGimmick_SignboardFrame.h"

AHbkGimmick_SignboardFrame::AHbkGimmick_SignboardFrame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->playerDizzy = false;
    this->pActivateVFX = NULL;
    this->NoteCountRate = 0.00f;
}

void AHbkGimmick_SignboardFrame::OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkGimmick_SignboardFrame::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_SignboardFrame::OnBeatSyncActivate(const int32 NoteCount) {
}


