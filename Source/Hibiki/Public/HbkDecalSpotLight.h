#pragma once
#include "CoreMinimal.h"
#include "HbkDecalLight.h"
#include "HbkDecalSpotLight.generated.h"

class UHbkDecalSpotLightComponent;

UCLASS(Blueprintable)
class AHbkDecalSpotLight : public AHbkDecalLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDecalSpotLightComponent* SpotLightComponent;
    
    AHbkDecalSpotLight(const FObjectInitializer& ObjectInitializer);

};

