#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_CNMNDisplaySound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_CNMNDisplaySound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* BombSE;
    
    HIBIKI_API FHbkGimmick_CNMNDisplaySound();
};

