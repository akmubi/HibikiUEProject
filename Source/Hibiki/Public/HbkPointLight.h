#pragma once
#include "CoreMinimal.h"
#include "HbkLight.h"
#include "HbkPointLight.generated.h"

class UHbkPointLightComponent;

UCLASS(Blueprintable)
class AHbkPointLight : public AHbkLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPointLightComponent* PointLightComponent;
    
    AHbkPointLight(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFalloffExponent(float NewLightFalloffExponent);
    
};

