#include "SoundTestActor.h"
#include "AkComponent.h"

ASoundTestActor::ASoundTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent0"));
    this->AkComponent = (UAkComponent*)RootComponent;
}

int32 ASoundTestActor::PostAssociatedAkEvent() {
    return 0;
}


