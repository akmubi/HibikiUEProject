#include "HbkGimmick_bg0290.h"

AHbkGimmick_bg0290::AHbkGimmick_bg0290(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->playerDizzy = false;
}

void AHbkGimmick_bg0290::OnInterpMoveEnded() {
}

void AHbkGimmick_bg0290::OnHitEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AHbkGimmick_bg0290::OnHitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_bg0290::OnBeatSyncActivate(int32 NoteCount, bool bDownBeat) {
}


