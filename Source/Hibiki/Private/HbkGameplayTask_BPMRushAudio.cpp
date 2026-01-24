#include "HbkGameplayTask_BPMRushAudio.h"

UHbkGameplayTask_BPMRushAudio::UHbkGameplayTask_BPMRushAudio(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BPMRushController = NULL;
    this->PlayMusicEvent = NULL;
    this->PlayStateEvent = NULL;
    this->StopMusicEvent = NULL;
}

UHbkGameplayTask_BPMRushAudio* UHbkGameplayTask_BPMRushAudio::Create(UObject* WorldContextObject, AHbkBPMRushController* NewBPMRushController, UAkAudioEvent* NewPlayMusicEvent, UAkAudioEvent* NewPlayStateEvent, UAkAudioEvent* NewStopMusicEvent) {
    return NULL;
}


