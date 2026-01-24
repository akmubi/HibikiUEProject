#pragma once
#include "CoreMinimal.h"
#include "HbkWorldVolumeLightingDataToLoad.generated.h"

class AHbkWorldVolumeLightingVolume;

USTRUCT(BlueprintType)
struct FHbkWorldVolumeLightingDataToLoad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkWorldVolumeLightingVolume* ActorToLoad;
    
    HIBIKI_API FHbkWorldVolumeLightingDataToLoad();
};

