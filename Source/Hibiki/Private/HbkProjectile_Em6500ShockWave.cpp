#include "HbkProjectile_Em6500ShockWave.h"
#include "AkComponent.h"

AHbkProjectile_Em6500ShockWave::AHbkProjectile_Em6500ShockWave(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->ShootLineParticle = NULL;
    this->AttackParticle = NULL;
    this->AkComponent->SetupAttachment(RootComponent);
}


