#include "HbkBreakable_0100.h"
#include "HbkStaticMeshComponent.h"

AHbkBreakable_0100::AHbkBreakable_0100(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StaticMeshComp = CreateDefaultSubobject<UHbkStaticMeshComponent>(TEXT("StaticMesh"));
    this->BreakEffect = NULL;
    this->BreakSE = NULL;
    this->OnGroundEffect = NULL;
    this->OnGroundSE = NULL;
    this->ObjectHalfSize = 50.00f;
    this->TraceCheckLength = 1000.00f;
    this->CheckUnderObjectsTimeLimit = 5.00f;
    this->IdlingTimeLimit = 5.00f;
    this->MoveSpeedAccel = 1.00f;
    this->StaticMeshComp->SetupAttachment(RootComponent);
}

void AHbkBreakable_0100::OnStaticMeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AHbkBreakable_0100::OnHealthZero() {
}


