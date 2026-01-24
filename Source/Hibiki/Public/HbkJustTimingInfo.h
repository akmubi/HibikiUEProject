#pragma once
#include "CoreMinimal.h"
#include "HbkJustTimingInfo.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkJustTimingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Sound;
    
    HIBIKI_API FHbkJustTimingInfo();
};

