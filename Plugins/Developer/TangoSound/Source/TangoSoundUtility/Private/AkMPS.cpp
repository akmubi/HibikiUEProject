#include "AkMPS.h"
#include "AkMPSComponent.h"

AAkMPS::AAkMPS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkMPSComponent>(TEXT("AkMPS"));
    this->AkMPS = (UAkMPSComponent*)RootComponent;
    this->bDebugDrawEditor_AllMPL = false;
}


