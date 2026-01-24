#include "HbkMoviePlayer.h"

UHbkMoviePlayer::UHbkMoviePlayer() {
    this->MovieInfoTable = NULL;
    this->MediaSource = NULL;
    this->Player = NULL;
    this->Texture = NULL;
    this->BinkPlayer = NULL;
    this->BinkTexture = NULL;
    this->AudioEventOnPlayback = NULL;
    this->AudioEventOnStop = NULL;
}

void UHbkMoviePlayer::OnPauseChanged(bool sw) {
}

void UHbkMoviePlayer::OnOpenFailed(const FString& OpenedUrl) {
}

void UHbkMoviePlayer::OnOpened(const FString& OpenedUrl) {
}

void UHbkMoviePlayer::OnMediaClosed() {
}

void UHbkMoviePlayer::OnEndReached() {
}


