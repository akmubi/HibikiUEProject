#pragma once
#include "CoreMinimal.h"
#include "HbkDecalLight.h"
#include "HbkDecalPointLight.generated.h"

class UHbkDecalPointLightComponent;

UCLASS(Blueprintable)
class AHbkDecalPointLight : public AHbkDecalLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDecalPointLightComponent* PointLightComponent;
    
    AHbkDecalPointLight(const FObjectInitializer& ObjectInitializer);

};

