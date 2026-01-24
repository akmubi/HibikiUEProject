#include "AkMusicSyncLinearComponent.h"
#include "AkMusicSyncComponent.h"

UAkMusicSyncLinearComponent::UAkMusicSyncLinearComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkMusicSyncComponent = CreateDefaultSubobject<UAkMusicSyncComponent>(TEXT("AkMusicSyncComponent"));
    this->bDebugDraw = false;
}


