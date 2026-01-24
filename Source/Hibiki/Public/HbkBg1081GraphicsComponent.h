#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkBg1081GraphicsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBg1081GraphicsComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHbkBg1081GraphicsComponent(const FObjectInitializer& ObjectInitializer);

};

