#include "AkAudioBank.h"

UAkAudioBank::UAkAudioBank() {
    this->Decode = false;
    this->LanguageType = AkLanguageType::SFX;
    this->AutoLoad = true;
    this->CurrentLocalizedPlatformAssetData = NULL;
}


