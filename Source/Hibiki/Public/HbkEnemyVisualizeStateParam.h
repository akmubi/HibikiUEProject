#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyVisualizeStateVFXParam.h"
#include "HbkEnemyVisualizeStateParam.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FHbkEnemyVisualizeStateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkEnemyVisualizeStateVFXParam VFXParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SE;
    
    HIBIKI_API FHbkEnemyVisualizeStateParam();
};

