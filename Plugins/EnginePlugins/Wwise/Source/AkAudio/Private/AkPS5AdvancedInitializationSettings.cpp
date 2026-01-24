#include "AkPS5AdvancedInitializationSettings.h"

FAkPS5AdvancedInitializationSettings::FAkPS5AdvancedInitializationSettings() {
    this->UseHardwareCodecLowLatencyMode = false;
    this->bVorbisHwAcceleration = false;
    this->MaxNumAudioOut2Ports = 0;
    this->MaxNumAudioOut2ObjectPorts = 0;
}

