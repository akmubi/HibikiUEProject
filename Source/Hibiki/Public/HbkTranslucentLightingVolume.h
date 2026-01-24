#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorActivateInterface.h"
#include "HbkTranslucentLightingVolume.generated.h"

class UHbkGameAgentComponent;
class UHbkTranslucentLightingVolumeComponent;

UCLASS(Blueprintable)
class AHbkTranslucentLightingVolume : public AActor, public IActorActivateInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkTranslucentLightingVolumeComponent* TranslucentLightingVolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkGameAgentComponent* GameAgentComp;
    
public:
    AHbkTranslucentLightingVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

