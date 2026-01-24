#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_StalactiteCameraShake.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FHbkGimmick_StalactiteCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> FallenCameraShake;
    
    HIBIKI_API FHbkGimmick_StalactiteCameraShake();
};

