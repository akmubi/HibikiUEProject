#include "AkLinearAmbientSound.h"
#include "AkLinearSpeakerComponent.h"

AAkLinearAmbientSound::AAkLinearAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkLinearSpeakerComponent = CreateDefaultSubobject<UAkLinearSpeakerComponent>(TEXT("AkLinearSpeakerComponent0"));
}


