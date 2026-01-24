#include "HbkRhythmSynchroComponent.h"

UHbkRhythmSynchroComponent::UHbkRhythmSynchroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SyncMusicId = -1;
    this->bEnableSynchro = true;
}

bool UHbkRhythmSynchroComponent::UnregisterUserCueEventInRSS(const FString& CheckString) {
    return false;
}

bool UHbkRhythmSynchroComponent::UnregisterMIDIEventInRSS(EHbkMIDIEvent EventType, int32 NoteNo) {
    return false;
}

void UHbkRhythmSynchroComponent::SetOnceSyncBeatEvent(FRSCSyncDelegate SyncEvent, EHbkNote SyncNote) {
}

void UHbkRhythmSynchroComponent::SetNextNoteEvent(FRSCSyncDelegate SyncEvent, EHbkNote Note) {
}

bool UHbkRhythmSynchroComponent::RegisterUserCueEventInRSS(const FString& CheckString) {
    return false;
}

bool UHbkRhythmSynchroComponent::RegisterMIDIEventInRSS(EHbkMIDIEvent EventType, int32 NoteNo, bool bEndless) {
    return false;
}

bool UHbkRhythmSynchroComponent::RegisterEventInRSS(EHbkNote NoteType, int32 LoopCount) {
    return false;
}

void UHbkRhythmSynchroComponent::OnSyncUserCueWithParam(const FString& UserString) {
}

void UHbkRhythmSynchroComponent::OnSyncUserCue(const FString& UserString) {
}

void UHbkRhythmSynchroComponent::OnSyncNoteMin(int32 NoteCount, bool bOnBeat) {
}

void UHbkRhythmSynchroComponent::OnSyncNote8(int32 NoteCount, bool bOnBeat) {
}

void UHbkRhythmSynchroComponent::OnSyncNote4(int32 NoteCount, bool bOnBeat) {
}

void UHbkRhythmSynchroComponent::OnSyncNote2(int32 NoteCount, bool bOnBeat) {
}

void UHbkRhythmSynchroComponent::OnSyncNote16(int32 NoteCount, bool bOnBeat) {
}

void UHbkRhythmSynchroComponent::OnSyncNote1(int32 NoteCount, bool bOnBeat) {
}

void UHbkRhythmSynchroComponent::OnPlayingMusic(int32 MusicId) {
}

void UHbkRhythmSynchroComponent::OnMIDINoteOn(int32 NoteNo, int32 Velocity) {
}

void UHbkRhythmSynchroComponent::OnMIDINoteOff(int32 NoteNo, int32 Velocity) {
}

void UHbkRhythmSynchroComponent::OnChangeMusic(int32 MusicId) {
}

bool UHbkRhythmSynchroComponent::IsEnabledRhythmSynchro() const {
    return false;
}

float UHbkRhythmSynchroComponent::GetTimeRate() const {
    return 0.0f;
}

float UHbkRhythmSynchroComponent::GetPlayRate(float MinValue) const {
    return 0.0f;
}

float UHbkRhythmSynchroComponent::GetNoteTimePosition(EHbkNote NoteType) const {
    return 0.0f;
}

float UHbkRhythmSynchroComponent::GetNoteTime(EHbkNote NoteType) const {
    return 0.0f;
}

float UHbkRhythmSynchroComponent::GetNextNoteTime(EHbkNote NoteType) const {
    return 0.0f;
}

float UHbkRhythmSynchroComponent::GetElapsedNoteTime(EHbkNote NoteType) const {
    return 0.0f;
}

float UHbkRhythmSynchroComponent::GetAdjustNextNoteTime(EHbkNote NoteType, float MinTimeRate) const {
    return 0.0f;
}

void UHbkRhythmSynchroComponent::EnableRhythmSynchro() {
}

void UHbkRhythmSynchroComponent::DesableRhythmSynchro() {
}

float UHbkRhythmSynchroComponent::CalcAdjustTimeRate() const {
    return 0.0f;
}


