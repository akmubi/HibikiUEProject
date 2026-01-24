#include "SoundTestManager.h"
#include "AkComponent.h"

ASoundTestManager::ASoundTestManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent1"));
    this->AkComponent0 = CreateDefaultSubobject<UAkComponent>(TEXT("AkAudioComponent0"));
    this->AkComponent1 = (UAkComponent*)RootComponent;
}

void ASoundTestManager::StopAkComponent1() {
}

void ASoundTestManager::StopAkComponent0() {
}

int32 ASoundTestManager::PostAkComponent1() {
    return 0;
}

int32 ASoundTestManager::PostAkComponent0() {
    return 0;
}


