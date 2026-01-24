#include "HbkProjectile_Em7500RotateEnergyAttack808.h"
#include "AkComponent.h"

AHbkProjectile_Em7500RotateEnergyAttack808::AHbkProjectile_Em7500RotateEnergyAttack808(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FanAngleRange = 45.00f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em7500RotateEnergyAttack808::OnloadCompleted() {
}

void AHbkProjectile_Em7500RotateEnergyAttack808::OnLaunchEvent(FName SlotName, AHbkProjectile* Projectile, const FHbkComplexLaunchParam& LaunchParam) {
}

void AHbkProjectile_Em7500RotateEnergyAttack808::OnAbortProjectileEvent() {
}


