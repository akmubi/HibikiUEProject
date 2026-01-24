#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushResultMusicData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkBPMRushResultMusicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BelowRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayStateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
    HIBIKI_API FHbkBPMRushResultMusicData();
};

