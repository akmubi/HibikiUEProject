#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MagmaSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_MagmaSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OverlapLargeSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OverlapSmallSE;
    
    HIBIKI_API FHbkGimmick_MagmaSound();
};

