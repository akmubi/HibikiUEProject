#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HbkEm0730_Spotlight.generated.h"

class UHbkSoloAnalyticFogSpotLightComponent;
class UHbkSoloSpotLightComponent;

UCLASS(Blueprintable)
class HIBIKI_API AHbkEm0730_Spotlight : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSoloSpotLightComponent* SpotLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkSoloAnalyticFogSpotLightComponent* FogSpotlightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightingHeight;
    
public:
    AHbkEm0730_Spotlight(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnEndBattle();
    
};

