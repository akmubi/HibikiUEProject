#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AkLinearAmbientSound.generated.h"

class UAkLinearSpeakerComponent;

UCLASS(Blueprintable)
class TANGOSOUNDUTILITY_API AAkLinearAmbientSound : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkLinearSpeakerComponent* AkLinearSpeakerComponent;
    
    AAkLinearAmbientSound(const FObjectInitializer& ObjectInitializer);

};

