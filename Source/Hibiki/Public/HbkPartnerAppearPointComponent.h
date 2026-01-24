#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "HbkPartnerAppearPointComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPartnerAppearPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UHbkPartnerAppearPointComponent(const FObjectInitializer& ObjectInitializer);

};

