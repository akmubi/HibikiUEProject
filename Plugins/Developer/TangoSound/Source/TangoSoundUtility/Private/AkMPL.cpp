#include "AkMPL.h"
#include "AkMPLComponent.h"

AAkMPL::AAkMPL(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkMPLComponent>(TEXT("AkMPL"));
    this->AkMPL = (UAkMPLComponent*)RootComponent;
}


