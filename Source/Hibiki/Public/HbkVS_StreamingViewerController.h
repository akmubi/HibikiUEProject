#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HbkVS_StreamingViewerController.generated.h"

UCLASS(Blueprintable)
class HIBIKI_API AHbkVS_StreamingViewerController : public APlayerController {
    GENERATED_BODY()
public:
    AHbkVS_StreamingViewerController(const FObjectInitializer& ObjectInitializer);

};

