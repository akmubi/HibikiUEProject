#pragma once
#include "CoreMinimal.h"
#include "HbkDecalLightComponent.h"
#include "HbkDecalPointLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkDecalPointLightComponent : public UHbkDecalLightComponent {
    GENERATED_BODY()
public:
    UHbkDecalPointLightComponent(const FObjectInitializer& ObjectInitializer);

};

