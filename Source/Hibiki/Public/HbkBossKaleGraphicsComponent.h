#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkBossKaleGraphicsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkBossKaleGraphicsComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHbkBossKaleGraphicsComponent(const FObjectInitializer& ObjectInitializer);

};

