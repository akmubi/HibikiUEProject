#include "AkRailAmbientSound.h"
#include "AkRailSpeakerComponent.h"

AAkRailAmbientSound::AAkRailAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkRailSpeakerComponent = CreateDefaultSubobject<UAkRailSpeakerComponent>(TEXT("AkRailSpeakerComponent0"));
}


