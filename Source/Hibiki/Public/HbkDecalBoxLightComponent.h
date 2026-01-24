#pragma once
#include "CoreMinimal.h"
#include "HbkDecalLightComponent.h"
#include "HbkDecalBoxLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkDecalBoxLightComponent : public UHbkDecalLightComponent {
    GENERATED_BODY()
public:
    UHbkDecalBoxLightComponent(const FObjectInitializer& ObjectInitializer);

};

