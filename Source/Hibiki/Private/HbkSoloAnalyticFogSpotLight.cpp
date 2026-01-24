#include "HbkSoloAnalyticFogSpotLight.h"
#include "Engine/EngineTypes.h"
#include "HbkSoloAnalyticFogSpotLightComponent.h"

AHbkSoloAnalyticFogSpotLight::AHbkSoloAnalyticFogSpotLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCollideWhenPlacing = true;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
    this->RootComponent = CreateDefaultSubobject<UHbkSoloAnalyticFogSpotLightComponent>(TEXT("LightComponent0"));
    this->SpotLightComponent = (UHbkSoloAnalyticFogSpotLightComponent*)RootComponent;
}


