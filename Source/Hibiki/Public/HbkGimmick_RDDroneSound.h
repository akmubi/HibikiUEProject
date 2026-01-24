#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RDDroneSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_RDDroneSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AppearSE;
    
    HIBIKI_API FHbkGimmick_RDDroneSound();
};

