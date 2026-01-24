#pragma once
#include "CoreMinimal.h"
#include "HbkForwardLightComponent.h"
#include "HbkForwardPointLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkForwardPointLightComponent : public UHbkForwardLightComponent {
    GENERATED_BODY()
public:
    UHbkForwardPointLightComponent(const FObjectInitializer& ObjectInitializer);

};

