#include "HbkProjectile_Em7500EnergyWallSp.h"
#include "AkComponent.h"

AHbkProjectile_Em7500EnergyWallSp::AHbkProjectile_Em7500EnergyWallSp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Process = EHbkEm7500EnergyWallStartingPointProcess::None;
    this->ProcessNo = 0;
    this->NoteTimeMax = 0.00f;
    this->NoteTime = 0.00f;
    this->CheckTraceChannel = TraceTypeQuery1;
    this->CheckTraceRadius = 50.00f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->bIsDebugDraw = false;
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em7500EnergyWallSp::OnAbortProjectileEvent() {
}


