#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EHbkMIDIEvent.h"
#include "EHbkMIDINoteType.h"
#include "EHbkNote.h"
#include "EHbkSpeanaType.h"
#include "RSSMIDISyncDelegateDelegate.h"
#include "RSSNoteSyncDelegateDelegate.h"
#include "RSSNoteSyncMulticastDelegateDelegate.h"
#include "RSSRegisterMusicDelegateDelegate.h"
#include "RSSUserCueMulticastDelegateDelegate.h"
#include "TngGameSystem.h"
#include "HbkRhythmSynchroSystem.generated.h"

class AAkAmbientSound;
class UAkAudioEvent;
class UAkComponent;
class UMaterialParameterCollection;
class UObject;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class HIBIKI_API UHbkRhythmSynchroSystem : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSNoteSyncMulticastDelegate OnNoteSync_Whole;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSNoteSyncMulticastDelegate OnNoteSync_Half;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSNoteSyncMulticastDelegate OnNoteSync_Quarter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSNoteSyncMulticastDelegate OnNoteSync_8th;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSNoteSyncMulticastDelegate OnNoteSync_16th;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSUserCueMulticastDelegate OnSync_UserCue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSRegisterMusicDelegate OnRegisterMusic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSRegisterMusicDelegate OnChangeMusic;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSRegisterMusicDelegate OnSetupMusicInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath AkAmbientSoundClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SpareAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DebugBarStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DebugNoteAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialCollectionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> DebugEventVolOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UAkAudioEvent*> DebugEventVolOffMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StreamerOffAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StreamerOnAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAkAmbientSound* AkAmbientSoundActor;
    
public:
    UHbkRhythmSynchroSystem();

protected:
    UFUNCTION(BlueprintCallable)
    void StopRSS();
    
    UFUNCTION(BlueprintCallable)
    void SetDebugVolOn(const TArray<FString>& Args);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugVolOff(const TArray<FString>& Args);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RSS_RegisterMusicAndPlay(UObject* WorldContextObject, UAkAudioEvent* AudioEvent, UAkAudioEvent* StateEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float RSS_GetBaseTimeRate(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float RSS_GetBasePlayTimeRate(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RSS_ChangeRegisterMusic(UObject* WorldContextObject, UAkAudioEvent* AudioEvent, UAkAudioEvent* StateEvent, UAkAudioEvent* StopEvent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool RSS_ChangeMusicState(UObject* WorldContextObject, UAkAudioEvent* StateEvent);
    
    UFUNCTION(BlueprintCallable)
    void ResumeMusic();
    
    UFUNCTION(BlueprintCallable)
    void RemoveUpdateSpectrum(EHbkSpeanaType Type);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEventForMIDINote(FRSSMIDISyncDelegate Delegate, EHbkMIDIEvent EventType, EHbkMIDINoteType NoteType, int32 SubNo);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEventForMIDI(FRSSMIDISyncDelegate Delegate, EHbkMIDIEvent EventType, int32 NoteNo);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveEvent(FRSSNoteSyncDelegate Delegate, EHbkNote NoteType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterUpdateSpectrum(EHbkSpeanaType Type);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterMusicAndPlay(UAkComponent* AkComponent);
    
    UFUNCTION(BlueprintCallable)
    void PauseMusic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMusic() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalBarCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTimeRate(float BPM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayTimeRate(float BPM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetNoteTimeWithBPM(EHbkNote Note, float BPM);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoteTimePosition(EHbkNote NoteType, bool bRealNote) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoteTime(EHbkNote Note);
    
    UFUNCTION(BlueprintCallable)
    void GetNoteCount(EHbkNote NoteType, int32& NoteCount, float& NextTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNextNoteTime(EHbkNote Note);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicNoteTime(EHbkNote Note) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicNextNoteTime(EHbkNote Note) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMusicBPM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedNoteTime(EHbkNote Note) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkNote GetCallNoteFlags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBeatCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseTimeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBasePlayTimeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBarCount() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeRegisterMusic(UAkComponent* AkComponent, UAkAudioEvent* StopEvent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostUpdateMusicInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PostTickUpdate(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Blueprint_PlaySpareAkEvent(UAkComponent* AkComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_IsStartNoteSync(const FGameplayTagContainer& Tags, const EHbkNote NoteType, int32 NoteCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Blueprint_IsCallNoteSyncEvent(const FGameplayTagContainer& Tags, const EHbkNote NoteType, int32 NoteCount) const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool BindEventForMIDINote(FRSSMIDISyncDelegate Delegate, EHbkMIDIEvent EventType, EHbkMIDINoteType NoteType, int32 SubNo, bool bEndless);
    
    UFUNCTION(BlueprintCallable)
    bool BindEventForMIDI(FRSSMIDISyncDelegate Delegate, EHbkMIDIEvent EventType, int32 NoteNo, bool bEndless);
    
    UFUNCTION(BlueprintCallable)
    bool BindEvent(FRSSNoteSyncDelegate Delegate, EHbkNote SyncType, FGameplayTagContainer StartTags, FGameplayTagContainer CallTags, int32 LoopCount);
    
};

