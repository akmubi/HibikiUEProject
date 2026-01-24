#include "TngSoundMusicManagerTestActor.h"
#include "AkComponent.h"

ATngSoundMusicManagerTestActor::ATngSoundMusicManagerTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent0"));
    this->AkComponent = (UAkComponent*)RootComponent;
}

void ATngSoundMusicManagerTestActor::Stop() {
}

int32 ATngSoundMusicManagerTestActor::PostAssociatedAkEvent() {
    return 0;
}


