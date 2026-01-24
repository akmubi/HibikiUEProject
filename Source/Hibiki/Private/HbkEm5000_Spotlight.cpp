#include "HbkEm5000_Spotlight.h"
#include "AkComponent.h"
#include "Components/SceneComponent.h"
#include "HbkRhythmSynchroComponent.h"
#include "HbkSoloAnalyticFogSpotLightComponent.h"
#include "HbkSoloSpotLightComponent.h"

AHbkEm5000_Spotlight::AHbkEm5000_Spotlight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->TrackMode = EHbkEm5000SpotlightTrackMode::None;
    this->TrackAlpha = 0.33f;
    this->NowSquareCount = -1.00f;
    this->SquareSize = 290.00f;
    this->AutoDestroyDeltaTime = 0.00f;
    this->bIsUpdateChangeColor = false;
    this->ElapsedTimeMax = 0.00f;
    this->ElapsedTime = 0.00f;
    this->SpotlightIntensity = 0.00f;
    this->FogSpotlightIntensity = 0.00f;
    this->AkComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AkComp"));
    this->RhythmSynchro = CreateDefaultSubobject<UHbkRhythmSynchroComponent>(TEXT("RhythmSynchro"));
    this->SpotLightComponent = CreateDefaultSubobject<UHbkSoloSpotLightComponent>(TEXT("SpotLight"));
    this->FogSpotlightComponent = CreateDefaultSubobject<UHbkSoloAnalyticFogSpotLightComponent>(TEXT("FogSpotlight"));
    this->bIsDebugDraw = false;
    this->TestSquareCount = 1.00f;
    this->TestActiveNoteType = EHbkNote::Note_Quarter;
    this->TestActiveNoteCount = 1.00f;
    this->TestTrackModeType = EHbkEm5000SpotlightTrackMode::None;
    this->AkComponent->SetupAttachment(RootComponent);
    this->SpotLightComponent->SetupAttachment(RootComponent);
    this->FogSpotlightComponent->SetupAttachment(RootComponent);
}

void AHbkEm5000_Spotlight::TestTrackMode() {
}

void AHbkEm5000_Spotlight::TestTrackingTargetPlayer() {
}

void AHbkEm5000_Spotlight::TestRestTrackingTarget() {
}

void AHbkEm5000_Spotlight::TestChangeConeAngle() {
}

void AHbkEm5000_Spotlight::SetTrackMode(EHbkEm5000SpotlightTrackMode InTrackMode) {
}

void AHbkEm5000_Spotlight::SetTrackingTarget(AHbkCharacter* TargetActor) {
}

void AHbkEm5000_Spotlight::SetTrackingSocketName(FName SocketName) {
}

void AHbkEm5000_Spotlight::SetTrackAlpha(float Alpha) {
}

void AHbkEm5000_Spotlight::SetAutoDestroy(float DeltaTime) {
}

void AHbkEm5000_Spotlight::ResetTrackingTarget() {
}

bool AHbkEm5000_Spotlight::IsWithinRange(const FVector& Location, float SquareCount) {
    return false;
}

void AHbkEm5000_Spotlight::ChangeLightColor(EHbkNote NoteType, float NoteCount) {
}

void AHbkEm5000_Spotlight::ChangeConeAngle(float SquareCount, EHbkNote NoteType, float NoteCount, bool IsPlaySe) {
}


