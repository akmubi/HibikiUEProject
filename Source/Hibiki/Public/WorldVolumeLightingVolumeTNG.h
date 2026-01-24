#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "WorldVolumeLightingVolumeTNG.generated.h"

class UWorldVolumeLightingVolumeComponentTNG;

UCLASS(Blueprintable)
class HIBIKI_API AWorldVolumeLightingVolumeTNG : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldVolumeLightingVolumeComponentTNG* WorldVolumeLightingVolumeComponent;
    
public:
    AWorldVolumeLightingVolumeTNG(const FObjectInitializer& ObjectInitializer);

};

