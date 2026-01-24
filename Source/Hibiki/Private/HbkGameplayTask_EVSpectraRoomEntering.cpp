#include "HbkGameplayTask_EVSpectraRoomEntering.h"

UHbkGameplayTask_EVSpectraRoomEntering::UHbkGameplayTask_EVSpectraRoomEntering(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SettingsData = NULL;
}

void UHbkGameplayTask_EVSpectraRoomEntering::OnTalkEnded(const FHbkTalkContext TalkContext) {
}

UHbkGameplayTask_EVSpectraRoomEntering* UHbkGameplayTask_EVSpectraRoomEntering::EventSpectraRoomEntering(UObject* WorldContextObject) {
    return NULL;
}


