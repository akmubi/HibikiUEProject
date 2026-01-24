#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_VolcaneSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SizeUpSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EruptionSignSE;
    
    HIBIKI_API FHbkGimmick_VolcaneSound();
};

