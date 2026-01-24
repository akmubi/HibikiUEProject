#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "HbkGimmick_SpectraCentralRoomEntranceDoorCameraBlend.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_SpectraCentralRoomEntranceDoorCameraBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> BlendFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendExp;
    
    HIBIKI_API FHbkGimmick_SpectraCentralRoomEntranceDoorCameraBlend();
};

