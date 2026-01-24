#pragma once
#include "CoreMinimal.h"
#include "HbkSpectraRoomReturnToHideOutAudioData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkSpectraRoomReturnToHideOutAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusic;
    
    FHbkSpectraRoomReturnToHideOutAudioData();
};

