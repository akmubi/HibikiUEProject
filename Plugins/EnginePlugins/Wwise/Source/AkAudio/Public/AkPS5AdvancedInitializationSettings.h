#pragma once
#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkPS5AdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkPS5AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHardwareCodecLowLatencyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVorbisHwAcceleration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxNumAudioOut2Ports;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 MaxNumAudioOut2ObjectPorts;
    
    AKAUDIO_API FAkPS5AdvancedInitializationSettings();
};

