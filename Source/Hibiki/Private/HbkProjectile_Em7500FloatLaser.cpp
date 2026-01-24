#include "HbkProjectile_Em7500FloatLaser.h"
#include "AkComponent.h"

AHbkProjectile_Em7500FloatLaser::AHbkProjectile_Em7500FloatLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PSTemplateHit = NULL;
    this->EndPointTraceChannel = ECC_Visibility;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em7500FloatLaser::OnAbortProjectileEvent() {
}


