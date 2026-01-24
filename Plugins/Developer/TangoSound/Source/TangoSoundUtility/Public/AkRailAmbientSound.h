#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkRailAmbientSound.generated.h"

class UAkRailSpeakerComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkRailAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRailSpeakerComponent* AkRailSpeakerComponent;
    
    AAkRailAmbientSound(const FObjectInitializer& ObjectInitializer);

};

