#pragma once
#include "CoreMinimal.h"
#include "HbkLight.h"
#include "HbkShadowSpotLight.generated.h"

class UHbkShadowSpotLightComponent;

UCLASS(Abstract, Blueprintable)
class AHbkShadowSpotLight : public AHbkLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkShadowSpotLightComponent* SpotLightComponent;
    
    AHbkShadowSpotLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOuterConeAngle(float NewOuterConeAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerConeAngle(float NewInnerConeAngle);
    
};

