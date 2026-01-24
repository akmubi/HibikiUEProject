#include "HbkEm7510_ArmDownR.h"
#include "AkComponent.h"

AHbkEm7510_ArmDownR::AHbkEm7510_ArmDownR(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComponent->SetupAttachment(RootComponent);
}


