#include "HbkMoviePlayComponent.h"

UHbkMoviePlayComponent::UHbkMoviePlayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNewMoviePlayMode = false;
    this->bAutoOpenMediaSource = false;
    this->bAutoPlay = false;
    this->bAutoStop = false;
    this->MediaTexture = NULL;
    this->MediaSource = NULL;
    this->MediaPlayer = NULL;
    this->MovieMaterial = NULL;
    this->MeshCompTagName = TEXT("ForMovie");
    this->MovieMaterialOptionalName = TEXT("VideoTexture");
    this->MovieDM = NULL;
}

void UHbkMoviePlayComponent::StopMovie() {
}

void UHbkMoviePlayComponent::PlayMovie() {
}

bool UHbkMoviePlayComponent::OpenSource() {
    return false;
}

void UHbkMoviePlayComponent::OnOpened(const FString& OpenedUrl) {
}

void UHbkMoviePlayComponent::OnEndReached() {
}


