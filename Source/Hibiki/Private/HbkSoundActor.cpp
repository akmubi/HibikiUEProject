#include "HbkSoundActor.h"
#include "AkComponent.h"

AHbkSoundActor::AHbkSoundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComp"));
    this->AkAudioComp = (UAkComponent*)RootComponent;
}

void AHbkSoundActor::TestStop() {
}

void AHbkSoundActor::TestPostAkEvent() {
}

void AHbkSoundActor::Stop(FName Identifier) {
}

bool AHbkSoundActor::PostAkEvent(FName Identifier) {
    return false;
}


