#pragma once
#include "CoreMinimal.h"
#include "EHbkMusicTitleTimingType.h"
#include "HbkBPMRushBattleMusicData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkBPMRushBattleMusicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMusicTitleTimingType MusicTitleType;
    
    HIBIKI_API FHbkBPMRushBattleMusicData();
};

