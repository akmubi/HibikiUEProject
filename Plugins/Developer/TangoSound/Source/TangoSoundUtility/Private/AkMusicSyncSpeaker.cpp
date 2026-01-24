#include "AkMusicSyncSpeaker.h"
#include "AkMusicSyncComponent.h"

AAkMusicSyncSpeaker::AAkMusicSyncSpeaker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAkMusicSyncComponent>(TEXT("Ak_MusicSync"));
    this->AkMusicSyncComponent = (UAkMusicSyncComponent*)RootComponent;
}


