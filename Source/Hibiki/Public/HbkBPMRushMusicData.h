#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushBattleMusicData.h"
#include "HbkBPMRushResultMusicData.h"
#include "HbkBPMRushMusicData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkBPMRushMusicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushBattleMusicData> BattleMusicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayTopMenuMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PlayTopMenuStateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopTopMenuMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkBPMRushResultMusicData> ResultMusicData;
    
    HIBIKI_API FHbkBPMRushMusicData();
};

