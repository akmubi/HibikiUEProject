#pragma once
#include "CoreMinimal.h"
#include "HbkLight.h"
#include "HbkDirectionalLight.generated.h"

class UHbkDirectionalLightComponent;

UCLASS(Blueprintable)
class AHbkDirectionalLight : public AHbkLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDirectionalLightComponent* DirectionalLightComponent;
    
    AHbkDirectionalLight(const FObjectInitializer& ObjectInitializer);

};

