#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AkSpatialAudioVolume.generated.h"

class UAkLateReverbComponent;
class UAkRoomComponent;
class UAkSurfaceReflectorSetComponent;
class UAkVolumeSpeakerComponent;

UCLASS(Blueprintable)
class AKAUDIO_API AAkSpatialAudioVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRoomComponent* Room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkVolumeSpeakerComponent* VolumeSpeaker;
    
    AAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

};

