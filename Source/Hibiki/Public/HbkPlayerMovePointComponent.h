#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkPlayerMovePointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerMovePointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHbkPlayerMovePointComponent(const FObjectInitializer& ObjectInitializer);

};

