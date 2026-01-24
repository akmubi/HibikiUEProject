#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_CharaHologramSound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_CharaHologramSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AppearSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DisappearSE;
    
    HIBIKI_API FHbkGimmick_CharaHologramSound();
};

