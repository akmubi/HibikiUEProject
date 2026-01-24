#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_VolcaneBombSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneBombSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ShotSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BombSE;
    
    HIBIKI_API FHbkGimmick_VolcaneBombSound();
};

