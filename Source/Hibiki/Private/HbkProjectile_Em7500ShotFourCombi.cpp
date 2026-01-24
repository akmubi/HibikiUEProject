#include "HbkProjectile_Em7500ShotFourCombi.h"
#include "AkComponent.h"

AHbkProjectile_Em7500ShotFourCombi::AHbkProjectile_Em7500ShotFourCombi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em7500ShotFourCombi::OnPlayerParryEvent() {
}

void AHbkProjectile_Em7500ShotFourCombi::OnLaunchEvent(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam) {
}

void AHbkProjectile_Em7500ShotFourCombi::OnAbortProjectileEvent() {
}


