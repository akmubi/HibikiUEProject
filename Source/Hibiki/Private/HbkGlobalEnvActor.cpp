#include "HbkGlobalEnvActor.h"
#include "AkComponent.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "Components/SceneComponent.h"
#include "HbkCharacterShadowSpotLightComponent.h"
#include "HbkPlayerShadowSpotLightComponent.h"

AHbkGlobalEnvActor::AHbkGlobalEnvActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("HbkGlobalEnvActor"));
    this->ExponentialHeightFogComponent = CreateDefaultSubobject<UExponentialHeightFogComponent>(TEXT("HeightFogComponent0"));
    this->PlayerShadowSpotLight2 = CreateDefaultSubobject<UHbkPlayerShadowSpotLightComponent>(TEXT("HbkPlayerShadowSpotLightComponent"));
    this->CharacterShadowSpotLight = CreateDefaultSubobject<UHbkCharacterShadowSpotLightComponent>(TEXT("HbkCharacterShadowSpotLightComponent"));
    this->AkComp = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->AkComp->SetupAttachment(RootComponent);
}

void AHbkGlobalEnvActor::OnStartTKEV(const FHbkPlayingTalkEventSceneInfo& Info) {
}

void AHbkGlobalEnvActor::OnStartLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}

void AHbkGlobalEnvActor::OnEndTKEV(const FHbkPlayingTalkEventSceneInfo& Info) {
}

void AHbkGlobalEnvActor::OnEndLevelSequence(const FHbkPlayingLevelSeqInfo& Info) {
}


