#include "InterpTrackAkAudioEvent.h"
#include "InterpTrackInstAkAudioEvent.h"

UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent() {
    this->TrackInstClass = UInterpTrackInstAkAudioEvent::StaticClass();
    this->TrackTitle = TEXT("Ak Audio Event");
    this->bContinueEventOnMatineeEnd = false;
}

const FString UInterpTrackAkAudioEvent::GetEdHelperClassName() const {
    return TEXT("");
}

const FString UInterpTrackAkAudioEvent::GetSlateHelperClassName() const {
    return TEXT("");
}

#if WITH_EDITORONLY_DATA
class UTexture2D* UInterpTrackAkAudioEvent::GetTrackIcon() const {
    return NULL;
}
#endif