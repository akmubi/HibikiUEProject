#pragma once
#include "CoreMinimal.h"
#include "HbkBPMRushWaveAudioData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkBPMRushWaveAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* IntroStateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StateEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartWaitNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChangeWaitNoteCount;
    
    HIBIKI_API FHbkBPMRushWaveAudioData();
};

