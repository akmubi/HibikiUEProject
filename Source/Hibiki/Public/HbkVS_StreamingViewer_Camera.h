#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "HbkVS_StreamingViewer_Camera.generated.h"

UCLASS(Blueprintable, NonTransient)
class HIBIKI_API AHbkVS_StreamingViewer_Camera : public APlayerCameraManager {
    GENERATED_BODY()
public:
    AHbkVS_StreamingViewer_Camera(const FObjectInitializer& ObjectInitializer);

};

