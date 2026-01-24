#include "HbkLevelSequencePlayer.h"
#include "Templates/SubclassOf.h"

UHbkLevelSequencePlayer::UHbkLevelSequencePlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UHbkLevelSequencePlayer::SkipToEndForBink() {
    return false;
}

void UHbkLevelSequencePlayer::ShowSequencerWidget(FName WidgetName, int32 Index) {
}

void UHbkLevelSequencePlayer::ShowIngamePlayer(bool bCompletely) {
}

void UHbkLevelSequencePlayer::ShowBoundActors() {
}

void UHbkLevelSequencePlayer::RemoteEvent(FName EventName) {
}

void UHbkLevelSequencePlayer::HideSequencerWidget(FName WidgetName, int32 Index) {
}

void UHbkLevelSequencePlayer::HideIngamePlayer(bool bCompletely) {
}

void UHbkLevelSequencePlayer::HideAllSequencerWidget() {
}

FFrameNumber UHbkLevelSequencePlayer::GetSubTrackLabelFrameNumber(const FName& TrackName, const FString& InLabel) {
    return FFrameNumber{};
}

FFrameNumber UHbkLevelSequencePlayer::GetLabelFrameNumber(const FString& InLabel) {
    return FFrameNumber{};
}

bool UHbkLevelSequencePlayer::CreateSequencerWidget(FName WidgetName, TSubclassOf<UHbkSequencerWidget> SequencerWidgetClass) {
    return false;
}


