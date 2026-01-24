#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmScoreInputEventParam.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkRhythmScoreInputEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventButton1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventButton2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventButton3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EventButton4;
    
    HIBIKI_API FHbkRhythmScoreInputEventParam();
};

