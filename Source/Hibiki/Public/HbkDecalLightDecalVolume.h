#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkDecalLightDecalVolume.generated.h"

class UHbkDecalLightDecalVolumeComponent;

UCLASS(Blueprintable)
class AHbkDecalLightDecalVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDecalLightDecalVolumeComponent* DecalLightDecalVolumeComponent;
    
    AHbkDecalLightDecalVolume(const FObjectInitializer& ObjectInitializer);

};

