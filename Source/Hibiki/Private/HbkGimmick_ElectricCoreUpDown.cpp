#include "HbkGimmick_ElectricCoreUpDown.h"

AHbkGimmick_ElectricCoreUpDown::AHbkGimmick_ElectricCoreUpDown(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->bElecticCoreMacaronMoved = false;
}

void AHbkGimmick_ElectricCoreUpDown::StopUpdateRestartPoint() {
}

void AHbkGimmick_ElectricCoreUpDown::OnRestartTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkGimmick_ElectricCoreUpDown::OnMovedElecticCoreMacaron() {
}


