#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_MovingFenceSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_MovingFenceSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> MoveSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MoveSeRef;
    
    HIBIKI_API FHbkGimmick_MovingFenceSound();
};

