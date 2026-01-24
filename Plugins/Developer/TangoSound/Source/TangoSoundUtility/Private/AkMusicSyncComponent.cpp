#include "AkMusicSyncComponent.h"

UAkMusicSyncComponent::UAkMusicSyncComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AkAudioEvent = NULL;
    this->OcclusionRefreshInterval = 0.00f;
    this->OcclusionCollisionChannel = ECC_Visibility;
    this->bEnableSphere = false;
    this->AddRadius = 500.00f;
    this->Mute = false;
    this->Ak = NULL;
}


