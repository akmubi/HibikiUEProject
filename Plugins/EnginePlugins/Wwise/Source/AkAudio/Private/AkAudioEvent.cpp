#include "AkAudioEvent.h"

UAkAudioEvent::UAkAudioEvent() {
    this->RequiredBank = NULL;
    this->CurrentLocalizedPlatformData = NULL;
    this->MaxAttenuationRadius_ = 0.00f;
    this->IsInfinite_ = false;
    this->MinimumDuration_ = 0.00f;
    this->MaximumDuration_ = 0.00f;
}

float UAkAudioEvent::MinimumDuration() const {
    return 0.0f;
}

float UAkAudioEvent::MaximumDuration() const {
    return 0.0f;
}

float UAkAudioEvent::MaxAttenuationRadius() const {
    return 0.0f;
}

bool UAkAudioEvent::IsInfinite() const {
    return false;
}

TMap<FName, float> UAkAudioEvent::GetPerLanguageDurationMin() const {
    return TMap<FName, float>();
}

TMap<FName, float> UAkAudioEvent::GetPerLanguageDurationMax() const {
    return TMap<FName, float>();
}

float UAkAudioEvent::GetMinimumDuration() const {
    return 0.0f;
}

float UAkAudioEvent::GetMaximumDuration() const {
    return 0.0f;
}

float UAkAudioEvent::GetMaxAttenuationRadius() const {
    return 0.0f;
}

bool UAkAudioEvent::GetIsInfinite() const {
    return false;
}


