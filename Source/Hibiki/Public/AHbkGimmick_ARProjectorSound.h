#pragma once
#include "CoreMinimal.h"
#include "AHbkGimmick_ARProjectorSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAHbkGimmick_ARProjectorSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AppearSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BurstSE;
    
    HIBIKI_API FAHbkGimmick_ARProjectorSound();
};

