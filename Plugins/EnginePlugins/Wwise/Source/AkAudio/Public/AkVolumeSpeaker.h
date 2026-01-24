#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkVolumeSpeaker.generated.h"

class UAkVolumeSpeakerComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkVolumeSpeaker : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkVolumeSpeakerComponent* AkVolumeSpeakerComponent;
    
    AAkVolumeSpeaker(const FObjectInitializer& ObjectInitializer);

};

