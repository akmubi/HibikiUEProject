#include "AkVolumeSpeaker.h"
#include "AkVolumeSpeakerComponent.h"

AAkVolumeSpeaker::AAkVolumeSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkVolumeSpeakerComponent = CreateDefaultSubobject<UAkVolumeSpeakerComponent>(TEXT("AkAudioVolumeSpeakerComponent0"));
    this->AkVolumeSpeakerComponent->SetupAttachment(RootComponent);
}


