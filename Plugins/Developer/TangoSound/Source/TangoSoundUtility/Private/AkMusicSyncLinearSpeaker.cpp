#include "AkMusicSyncLinearSpeaker.h"
#include "AkMusicSyncLinearComponent.h"

AAkMusicSyncLinearSpeaker::AAkMusicSyncLinearSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkMusicSyncLinearComponent>(TEXT("Ak_MusicSync"));
    this->AkMusicSyncLinearComponent = (UAkMusicSyncLinearComponent*)RootComponent;
}


