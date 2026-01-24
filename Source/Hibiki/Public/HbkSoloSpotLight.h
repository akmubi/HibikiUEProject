#pragma once
#include "CoreMinimal.h"
#include "HbkSoloLight.h"
#include "HbkSoloSpotLight.generated.h"

class UHbkSoloSpotLightComponent;

UCLASS(Blueprintable)
class AHbkSoloSpotLight : public AHbkSoloLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSoloSpotLightComponent* SpotLightComponent;
    
    AHbkSoloSpotLight(const FObjectInitializer& ObjectInitializer);

};

