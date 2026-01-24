#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkSoloAnalyticFogSpotLight.generated.h"

class UHbkSoloAnalyticFogSpotLightComponent;

UCLASS(Blueprintable)
class AHbkSoloAnalyticFogSpotLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSoloAnalyticFogSpotLightComponent* SpotLightComponent;
    
    AHbkSoloAnalyticFogSpotLight(const FObjectInitializer& ObjectInitializer);

};

