#include "HbkRhythmSynchroSystem.h"

UHbkRhythmSynchroSystem::UHbkRhythmSynchroSystem() {
    this->SpareAkEvent = NULL;
    this->DebugBarStartAkEvent = NULL;
    this->DebugNoteAkEvent = NULL;
    this->MaterialCollectionAsset = NULL;
    this->StreamerOffAkEvent = NULL;
    this->StreamerOnAkEvent = NULL;
    this->AkAmbientSoundActor = NULL;
}

void UHbkRhythmSynchroSystem::StopRSS() {
}

void UHbkRhythmSynchroSystem::SetDebugVolOn(const TArray<FString>& Args) {
}

void UHbkRhythmSynchroSystem::SetDebugVolOff(const TArray<FString>& Args) {
}

bool UHbkRhythmSynchroSystem::RSS_RegisterMusicAndPlay(UObject* WorldContextObject, UAkAudioEvent* AudioEvent, UAkAudioEvent* StateEvent) {
    return false;
}

float UHbkRhythmSynchroSystem::RSS_GetBaseTimeRate(UObject* WorldContextObject) {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::RSS_GetBasePlayTimeRate(UObject* WorldContextObject) {
    return 0.0f;
}

bool UHbkRhythmSynchroSystem::RSS_ChangeRegisterMusic(UObject* WorldContextObject, UAkAudioEvent* AudioEvent, UAkAudioEvent* StateEvent, UAkAudioEvent* StopEvent) {
    return false;
}

bool UHbkRhythmSynchroSystem::RSS_ChangeMusicState(UObject* WorldContextObject, UAkAudioEvent* StateEvent) {
    return false;
}

void UHbkRhythmSynchroSystem::ResumeMusic() {
}

void UHbkRhythmSynchroSystem::RemoveUpdateSpectrum(EHbkSpeanaType Type) {
}

bool UHbkRhythmSynchroSystem::RemoveEventForMIDINote(FRSSMIDISyncDelegate Delegate, EHbkMIDIEvent EventType, EHbkMIDINoteType NoteType, int32 SubNo) {
    return false;
}

bool UHbkRhythmSynchroSystem::RemoveEventForMIDI(FRSSMIDISyncDelegate Delegate, EHbkMIDIEvent EventType, int32 NoteNo) {
    return false;
}

bool UHbkRhythmSynchroSystem::RemoveEvent(FRSSNoteSyncDelegate Delegate, EHbkNote NoteType) {
    return false;
}

void UHbkRhythmSynchroSystem::RegisterUpdateSpectrum(EHbkSpeanaType Type) {
}

bool UHbkRhythmSynchroSystem::RegisterMusicAndPlay(UAkComponent* AkComponent) {
    return false;
}

void UHbkRhythmSynchroSystem::PauseMusic() {
}

bool UHbkRhythmSynchroSystem::IsPlayingMusic() const {
    return false;
}

int32 UHbkRhythmSynchroSystem::GetTotalBarCount() {
    return 0;
}

float UHbkRhythmSynchroSystem::GetTimeRate(float BPM) {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::GetPlayTimeRate(float BPM) {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::GetNoteTimeWithBPM(EHbkNote Note, float BPM) {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::GetNoteTimePosition(EHbkNote NoteType, bool bRealNote) const {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::GetNoteTime(EHbkNote Note) {
    return 0.0f;
}

void UHbkRhythmSynchroSystem::GetNoteCount(EHbkNote NoteType, int32& NoteCount, float& NextTime) {
}

float UHbkRhythmSynchroSystem::GetNextNoteTime(EHbkNote Note) {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::GetMusicNoteTime(EHbkNote Note) const {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::GetMusicNextNoteTime(EHbkNote Note) const {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::GetMusicBPM() const {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::GetElapsedNoteTime(EHbkNote Note) const {
    return 0.0f;
}

EHbkNote UHbkRhythmSynchroSystem::GetCallNoteFlags() {
    return EHbkNote::None;
}

int32 UHbkRhythmSynchroSystem::GetBeatCount() const {
    return 0;
}

float UHbkRhythmSynchroSystem::GetBaseTimeRate() const {
    return 0.0f;
}

float UHbkRhythmSynchroSystem::GetBasePlayTimeRate() const {
    return 0.0f;
}

int32 UHbkRhythmSynchroSystem::GetBarCount() const {
    return 0;
}

bool UHbkRhythmSynchroSystem::ChangeRegisterMusic(UAkComponent* AkComponent, UAkAudioEvent* StopEvent) {
    return false;
}






bool UHbkRhythmSynchroSystem::BindEventForMIDINote(FRSSMIDISyncDelegate Delegate, EHbkMIDIEvent EventType, EHbkMIDINoteType NoteType, int32 SubNo, bool bEndless) {
    return false;
}

bool UHbkRhythmSynchroSystem::BindEventForMIDI(FRSSMIDISyncDelegate Delegate, EHbkMIDIEvent EventType, int32 NoteNo, bool bEndless) {
    return false;
}

bool UHbkRhythmSynchroSystem::BindEvent(FRSSNoteSyncDelegate Delegate, EHbkNote SyncType, FGameplayTagContainer StartTags, FGameplayTagContainer CallTags, int32 LoopCount) {
    return false;
}


