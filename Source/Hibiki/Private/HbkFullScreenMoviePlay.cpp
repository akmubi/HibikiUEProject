#include "HbkFullScreenMoviePlay.h"
#include "Templates/SubclassOf.h"

UHbkFullScreenMoviePlay::UHbkFullScreenMoviePlay() {
    this->SequencePlayer = NULL;
}

void UHbkFullScreenMoviePlay::Receive_OnStartMovie() {
}

void UHbkFullScreenMoviePlay::PostScreenTransit() {
}

UHbkFullScreenMoviePlay* UHbkFullScreenMoviePlay::PlayFullScreenMovieWithST(UObject* WorldContextObject, UMediaPlayer* MPlayer, UMediaSource* MSource, UMediaTexture* MTexture, EHbkTalkScreenTransition InFuncType, float InDuration, EHbkTalkScreenTransition OutFuncType, float OutDuration, TSubclassOf<UTngUserWidget> WaterMarkWidgetClass, const FString& WaterMarkText) {
    return NULL;
}

UHbkFullScreenMoviePlay* UHbkFullScreenMoviePlay::PlayFullScreenMovieBinkWithST(UObject* WorldContextObject, FName MovieInfoKey, EHbkFullScreenMovieManualStopType ManualStopType, UTexture2D* LoadImageTexture, EHbkTalkScreenTransition InFuncType, float InDuration, EHbkTalkScreenTransition OutFuncType, float OutDuration, TSubclassOf<UTngUserWidget> WaterMarkWidgetClass, const FString& WaterMarkText) {
    return NULL;
}

UHbkFullScreenMoviePlay* UHbkFullScreenMoviePlay::PlayFullScreenMovieBinkWithAlpha(UObject* WorldContextObject, FName MovieInfoKey, UHbkLevelSequencePlayer* LevelSequencePlayer) {
    return NULL;
}

UHbkFullScreenMoviePlay* UHbkFullScreenMoviePlay::PlayFullScreenMovieBink(UObject* WorldContextObject, FName MovieInfoKey, EHbkFullScreenMovieManualStopType ManualStopType, UTexture2D* LoadImageTexture) {
    return NULL;
}

UHbkFullScreenMoviePlay* UHbkFullScreenMoviePlay::PlayFullScreenMovie(UObject* WorldContextObject, UMediaPlayer* MPlayer, UMediaSource* MSource, UMediaTexture* MTexture) {
    return NULL;
}

void UHbkFullScreenMoviePlay::OnSkipedSequence() {
}

void UHbkFullScreenMoviePlay::OnPreEndMovie(bool bSkip) {
}

void UHbkFullScreenMoviePlay::OnEndMovie(bool bSkip) {
}


