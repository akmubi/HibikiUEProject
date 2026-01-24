#include "InterpTrackAkAudioRTPC.h"
#include "InterpTrackInstAkAudioEvent.h"

UInterpTrackAkAudioRTPC::UInterpTrackAkAudioRTPC() {
    this->TrackInstClass = UInterpTrackInstAkAudioEvent::StaticClass();
    this->TrackTitle = TEXT("Ak Audio RTPC");
    this->bPlayOnReverse = false;
    this->bContinueRTPCOnMatineeEnd = false;
}


const FString UInterpTrackAkAudioRTPC::GetEdHelperClassName() const {
    return TEXT("");
}

const FString UInterpTrackAkAudioRTPC::GetSlateHelperClassName() const {
    return TEXT("");
}

#if WITH_EDITORONLY_DATA
class UTexture2D* UInterpTrackAkAudioRTPC::GetTrackIcon() const {
    return NULL;
}
#endif