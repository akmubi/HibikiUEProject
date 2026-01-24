#include "HbkGameplayTask_EVSpectraRoomCleared.h"

UHbkGameplayTask_EVSpectraRoomCleared::UHbkGameplayTask_EVSpectraRoomCleared(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpectraRoomController = NULL;
    this->SettingsData = NULL;
}

void UHbkGameplayTask_EVSpectraRoomCleared::OnTalkEnded(const FHbkTalkContext TalkContext) {
}

UHbkGameplayTask_EVSpectraRoomCleared* UHbkGameplayTask_EVSpectraRoomCleared::EventSpectraRoomCleared(UObject* WorldContextObject) {
    return NULL;
}


