#include "HbkRhythmSynchroSignalComponent.h"

UHbkRhythmSynchroSignalComponent::UHbkRhythmSynchroSignalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UHbkRhythmSynchroSignalComponent::SetSignalParams(const TArray<FHbkRhythmSynchroSignalParam>& Params) {
}

void UHbkRhythmSynchroSignalComponent::SetMIDISignalParams(const TArray<FHbkRhythmSynchroMIDISignalParam>& Params) {
}

void UHbkRhythmSynchroSignalComponent::RegisterSignalMIDI(const FHbkRhythmSynchroMIDISignalParam& Param, int32 Velocity) {
}

void UHbkRhythmSynchroSignalComponent::RegisterSignalCue(const FHbkRhythmSynchroSignalParam& Param) {
}

void UHbkRhythmSynchroSignalComponent::OnUserCueEvent(const FString& UserCue) {
}

void UHbkRhythmSynchroSignalComponent::OnPlayingMusic(int32 MusicId) {
}

void UHbkRhythmSynchroSignalComponent::OnNoteOnEvent(int32 NoteNo, int32 Velocity) {
}

bool UHbkRhythmSynchroSignalComponent::IsValidSignalCueFromIndex(int32 Index) {
    return false;
}

bool UHbkRhythmSynchroSignalComponent::IsValidSignalCue(const FName Identifier) {
    return false;
}

FHbkRhythmSynchroSignalCue UHbkRhythmSynchroSignalComponent::GetSignalCueLastFromIndex(int32 Index) {
    return FHbkRhythmSynchroSignalCue{};
}

FHbkRhythmSynchroSignalCue UHbkRhythmSynchroSignalComponent::GetSignalCueLast(const FName Identifier) {
    return FHbkRhythmSynchroSignalCue{};
}

FHbkRhythmSynchroSignalCue UHbkRhythmSynchroSignalComponent::GetSignalCueFromIndex(int32 Index) {
    return FHbkRhythmSynchroSignalCue{};
}

int32 UHbkRhythmSynchroSignalComponent::GetSignalCueCountFromIndex(int32 Index) {
    return 0;
}

int32 UHbkRhythmSynchroSignalComponent::GetSignalCueCount(const FName Identifier) {
    return 0;
}

FHbkRhythmSynchroSignalCue UHbkRhythmSynchroSignalComponent::GetSignalCueAtFromIndex(int32 Index, int32 Count) {
    return FHbkRhythmSynchroSignalCue{};
}

FHbkRhythmSynchroSignalCue UHbkRhythmSynchroSignalComponent::GetSignalCueAt(const FName Identifier, int32 Count) {
    return FHbkRhythmSynchroSignalCue{};
}

FHbkRhythmSynchroSignalCue UHbkRhythmSynchroSignalComponent::GetSignalCue(const FName Identifier) {
    return FHbkRhythmSynchroSignalCue{};
}


