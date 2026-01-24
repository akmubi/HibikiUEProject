#pragma once
#include "CoreMinimal.h"
#include "HbkTalkEventCameraInfo.generated.h"

class AHbkCameraActor;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkEventCameraInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AHbkCameraActor> CameraPtr;
    
    FHbkTalkEventCameraInfo();
};

