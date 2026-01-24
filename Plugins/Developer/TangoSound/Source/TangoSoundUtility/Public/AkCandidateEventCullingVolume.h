#pragma once
#include "CoreMinimal.h"
#include "AkCandidateVolume.h"
#include "AkCandidateEventCullingVolume.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkCandidateEventCullingVolume : public AAkCandidateVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> AkAudioEvents;
    
    AAkCandidateEventCullingVolume(const FObjectInitializer& ObjectInitializer);

};

