#include "HbkEm7500_BitBase.h"
#include "AkComponent.h"
#include "HbkComplexLauncherComponent.h"

AHbkEm7500_BitBase::AHbkEm7500_BitBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Const_FollowDelayRate = 0.50f;
    this->Const_HeadRotSpeed = 0.00f;
    this->bIsUseFloatingLaserQuickToMove = false;
    this->ComplexLauncherComponent = CreateDefaultSubobject<UHbkComplexLauncherComponent>(TEXT("ComplexLauncher"));
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}


