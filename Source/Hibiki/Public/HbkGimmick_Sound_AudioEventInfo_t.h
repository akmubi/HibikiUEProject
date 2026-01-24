#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_Sound_AudioEventInfo_t.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkGimmick_Sound_AudioEventInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> PlayAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* pPlayAudioEvent;
    
    FHbkGimmick_Sound_AudioEventInfo_t();
};

