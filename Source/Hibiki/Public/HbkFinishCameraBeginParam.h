#pragma once
#include "CoreMinimal.h"
#include "HbkFinishCameraBeginParam.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkFinishCameraBeginParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSlowMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OverrideFinishCameraSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCollisionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableResetViewTargetToPlayerCamera;
    
    FHbkFinishCameraBeginParam();
};

