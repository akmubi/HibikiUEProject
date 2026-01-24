#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkFollowPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkFollowPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHbkFollowPointComponent(const FObjectInitializer& ObjectInitializer);

};

