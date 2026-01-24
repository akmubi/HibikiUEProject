#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "HbkAnimCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkAnimCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UHbkAnimCameraComponent(const FObjectInitializer& ObjectInitializer);

};

