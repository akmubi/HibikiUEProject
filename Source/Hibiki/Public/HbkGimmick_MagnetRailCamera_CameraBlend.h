#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "HbkGimmick_MagnetRailCamera_CameraBlend.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_MagnetRailCamera_CameraBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> BlendFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlendLockOutgoing;
    
    HIBIKI_API FHbkGimmick_MagnetRailCamera_CameraBlend();
};

