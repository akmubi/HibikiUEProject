#pragma once
#include "CoreMinimal.h"
#include "HbkLight.h"
#include "HbkSpotLight.generated.h"

class UHbkSpotLightComponent;

UCLASS(Blueprintable)
class AHbkSpotLight : public AHbkLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSpotLightComponent* SpotLightComponent;
    
    AHbkSpotLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetOuterConeAngle(float NewOuterConeAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetInnerConeAngle(float NewInnerConeAngle);
    
};

