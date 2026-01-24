#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_bg1080Sound.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkGimmick_bg1080Sound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartUpSE;
    
    HIBIKI_API FHbkGimmick_bg1080Sound();
};

