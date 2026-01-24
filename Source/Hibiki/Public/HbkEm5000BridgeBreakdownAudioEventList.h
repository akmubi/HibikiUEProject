#pragma once
#include "CoreMinimal.h"
#include "HbkEm5000BridgeBreakdownAudioEventList.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkEm5000BridgeBreakdownAudioEventList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> AudioEvents;
    
    HIBIKI_API FHbkEm5000BridgeBreakdownAudioEventList();
};

