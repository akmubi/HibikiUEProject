#pragma once
#include "CoreMinimal.h"
#include "HbkBeatHitUIInfo.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkBeatHitUIInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SignalSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExSignalSE;
    
    HIBIKI_API FHbkBeatHitUIInfo();
};

