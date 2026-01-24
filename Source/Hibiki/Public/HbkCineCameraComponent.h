#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "HbkCineCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkCineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
    UHbkCineCameraComponent();

};

