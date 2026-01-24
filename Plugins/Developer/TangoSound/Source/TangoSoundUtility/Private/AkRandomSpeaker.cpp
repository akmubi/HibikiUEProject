#include "AkRandomSpeaker.h"
#include "AkRandomComponent.h"

AAkRandomSpeaker::AAkRandomSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkRandomComponent>(TEXT("Ak_Random"));
    this->AkRandomComponent = (UAkRandomComponent*)RootComponent;
}


