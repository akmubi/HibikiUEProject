#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "EHbkNote.h"
#include "HbkGraffitiCollectCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct FHbkGraffitiCollectCameraSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote BlendNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlendNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EViewTargetBlendFunction> BlendFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendExp;
    
    HIBIKI_API FHbkGraffitiCollectCameraSettings();
};

