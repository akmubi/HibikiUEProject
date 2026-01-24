#include "HbkGimmick_Trashcan.h"

AHbkGimmick_Trashcan::AHbkGimmick_Trashcan(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FallingSeRef = NULL;
    this->VfxRef = NULL;
}

void AHbkGimmick_Trashcan::OnStaticMeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


