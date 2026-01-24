#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_VolcaneCameraShake.generated.h"

class UCameraShakeBase;

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> EruptionSignCameraShake;
    
    HIBIKI_API FHbkGimmick_VolcaneCameraShake();
};

