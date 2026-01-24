#pragma once
#include "CoreMinimal.h"
#include "HbkForwardLight.h"
#include "HbkForwardSpotLight.generated.h"

class UHbkForwardSpotLightComponent;

UCLASS(Blueprintable)
class AHbkForwardSpotLight : public AHbkForwardLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkForwardSpotLightComponent* SpotLightComponent;
    
    AHbkForwardSpotLight(const FObjectInitializer& ObjectInitializer);

};

