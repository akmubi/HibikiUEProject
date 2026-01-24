#pragma once
#include "CoreMinimal.h"
#include "HbkForwardLight.h"
#include "HbkForwardPointLight.generated.h"

class UHbkForwardPointLightComponent;

UCLASS(Blueprintable)
class AHbkForwardPointLight : public AHbkForwardLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkForwardPointLightComponent* PointLightComponent;
    
    AHbkForwardPointLight(const FObjectInitializer& ObjectInitializer);

};

