#include "AkSphereSpeaker2.h"
#include "AkSphereComponent2.h"

AAkSphereSpeaker2::AAkSphereSpeaker2(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkSphereComponent2>(TEXT("Ak_SPSP2"));
    this->AkSphereComponent2 = (UAkSphereComponent2*)RootComponent;
}

void AAkSphereSpeaker2::SetEnable(bool bEnable) {
}


