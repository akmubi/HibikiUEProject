#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushMusicData.h"
#include "HbkBPMRushMusicSeData.h"
#include "HbkBPMRushAudioData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushMusicData MusicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkBPMRushMusicSeData SeData;
    
    HIBIKI_API FHbkBPMRushAudioData();
};

