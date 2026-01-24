#include "HbkGameUserSettings.h"

UHbkGameUserSettings::UHbkGameUserSettings() {
    this->bUseVSync = true;
    this->ProjectSettingVersion = 1;
    this->bAudioOutputStereoEnabled = false;
}

UHbkGameUserSettings* UHbkGameUserSettings::K2_GetHbkGameUserSettings(UObject* WorldContextObject) {
    return NULL;
}


