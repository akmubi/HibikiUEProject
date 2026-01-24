#pragma once
#include "CoreMinimal.h"
#include "HbkBossActionVoiceContent.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkBossActionVoiceContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FirstActionVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ActionVoice;
    
    HIBIKI_API FHbkBossActionVoiceContent();
};

