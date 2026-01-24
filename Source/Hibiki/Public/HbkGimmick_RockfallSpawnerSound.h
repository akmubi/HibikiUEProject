#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RockfallSpawnerSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_RockfallSpawnerSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FallSE;
    
    HIBIKI_API FHbkGimmick_RockfallSpawnerSound();
};

