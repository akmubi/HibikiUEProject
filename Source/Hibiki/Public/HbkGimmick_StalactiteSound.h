#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_StalactiteSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_StalactiteSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExplosionSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallSE;
    
    HIBIKI_API FHbkGimmick_StalactiteSound();
};

