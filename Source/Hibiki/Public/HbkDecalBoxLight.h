#pragma once
#include "CoreMinimal.h"
#include "HbkDecalLight.h"
#include "HbkDecalBoxLight.generated.h"

class UHbkDecalBoxLightComponent;

UCLASS(Blueprintable)
class AHbkDecalBoxLight : public AHbkDecalLight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkDecalBoxLightComponent* BoxLightComponent;
    
    AHbkDecalBoxLight(const FObjectInitializer& ObjectInitializer);

};

