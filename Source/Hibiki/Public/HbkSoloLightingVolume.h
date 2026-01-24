#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkSoloLightingVolume.generated.h"

class UHbkSoloLightingVolumeComponent;

UCLASS(Blueprintable)
class AHbkSoloLightingVolume : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSoloLightingVolumeComponent* LightComponent;
    
public:
    AHbkSoloLightingVolume(const FObjectInitializer& ObjectInitializer);

};

