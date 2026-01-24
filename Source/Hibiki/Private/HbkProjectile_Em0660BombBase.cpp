#include "HbkProjectile_Em0660BombBase.h"
#include "AkComponent.h"

AHbkProjectile_Em0660BombBase::AHbkProjectile_Em0660BombBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BeginMoveHeightCurve = NULL;
    this->ThrowMoveNoteCount = 4.00f;
    this->GroundHeightOffset = 0.00f;
    this->LaunchMinHeightDistance = 400.00f;
    this->AkCompMain = CreateDefaultSubobject<UAkComponent>(TEXT("AkCompMain"));
    this->SE_OnLaunch = NULL;
    this->AreaEffect = NULL;
    this->EffectHeightOffset_Throw = 2.00f;
    this->ForecastLineScale = 5.00f;
    this->AkCompMain->SetupAttachment(RootComponent);
}

void AHbkProjectile_Em0660BombBase::CancelAction() {
}


