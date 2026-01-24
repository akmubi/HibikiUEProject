#include "HbkCineMoviePlayer.h"

UHbkCineMoviePlayer::UHbkCineMoviePlayer() {
    this->MediaTexture = NULL;
    this->MediaPlayer = NULL;
}

void UHbkCineMoviePlayer::OnMovieOpenFailure(const FString& DeviceUrl) {
}

void UHbkCineMoviePlayer::OnMovieOpened(const FString& DeviceUrl) {
}


