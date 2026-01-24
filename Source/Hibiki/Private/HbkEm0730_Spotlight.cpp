#include "HbkEm0730_Spotlight.h"
#include "Components/SceneComponent.h"
#include "HbkSoloAnalyticFogSpotLightComponent.h"
#include "HbkSoloSpotLightComponent.h"

AHbkEm0730_Spotlight::AHbkEm0730_Spotlight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->SpotLightComponent = CreateDefaultSubobject<UHbkSoloSpotLightComponent>(TEXT("SpotLight"));
    this->FogSpotlightComponent = CreateDefaultSubobject<UHbkSoloAnalyticFogSpotLightComponent>(TEXT("FogSpotlight"));
    this->LightingHeight = 1000.00f;
    this->SpotLightComponent->SetupAttachment(RootComponent);
    this->FogSpotlightComponent->SetupAttachment(RootComponent);
}

void AHbkEm0730_Spotlight::Receive_OnEndBattle() {
}


