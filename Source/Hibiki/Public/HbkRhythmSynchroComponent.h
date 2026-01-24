#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHbkMIDIEvent.h"
#include "EHbkNote.h"
#include "HbkRSCompInitializeParam.h"
#include "HbkRSCompMIDIInitializeParam.h"
#include "RSCFineNoteSyncDelegateDelegate.h"
#include "RSCMIDISyncDelegateDelegate.h"
#include "RSCNoteSyncDelegateDelegate.h"
#include "RSCPlayingMusicDelegateDelegate.h"
#include "RSCSyncDelegateDelegate.h"
#include "RSCUserCueDelegateDelegate.h"
#include "HbkRhythmSynchroComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkRhythmSynchroComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCNoteSyncDelegate OnBarEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCNoteSyncDelegate OnHalfNoteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCNoteSyncDelegate OnBeatEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCFineNoteSyncDelegate On8thNoteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCFineNoteSyncDelegate On16thNoteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCUserCueDelegate OnUserCueEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCPlayingMusicDelegate OnSyncPrepare;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCMIDISyncDelegate OnNoteOnEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSCMIDISyncDelegate OnNoteOffEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncMusicId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSynchro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRSCompInitializeParam> InitializeRSSRegisterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRSCompMIDIInitializeParam> MIDIInitializeRSSRegisterList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CheckUserCues;
    
public:
    UHbkRhythmSynchroComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UnregisterUserCueEventInRSS(const FString& CheckString);
    
    UFUNCTION(BlueprintCallable)
    bool UnregisterMIDIEventInRSS(EHbkMIDIEvent EventType, int32 NoteNo);
    
    UFUNCTION(BlueprintCallable)
    void SetOnceSyncBeatEvent(FRSCSyncDelegate SyncEvent, EHbkNote SyncNote);
    
    UFUNCTION(BlueprintCallable)
    void SetNextNoteEvent(FRSCSyncDelegate SyncEvent, EHbkNote Note);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterUserCueEventInRSS(const FString& CheckString);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterMIDIEventInRSS(EHbkMIDIEvent EventType, int32 NoteNo, bool bEndless);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterEventInRSS(EHbkNote NoteType, int32 LoopCount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSyncUserCueWithParam(const FString& UserString);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncUserCue(const FString& UserString);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNoteMin(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote8(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote4(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote2(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote16(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnSyncNote1(int32 NoteCount, bool bOnBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayingMusic(int32 MusicId);
    
    UFUNCTION(BlueprintCallable)
    void OnMIDINoteOn(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void OnMIDINoteOff(int32 NoteNo, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeMusic(int32 MusicId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabledRhythmSynchro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate(float MinValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoteTimePosition(EHbkNote NoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNoteTime(EHbkNote NoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNextNoteTime(EHbkNote NoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedNoteTime(EHbkNote NoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAdjustNextNoteTime(EHbkNote NoteType, float MinTimeRate) const;
    
    UFUNCTION(BlueprintCallable)
    void EnableRhythmSynchro();
    
    UFUNCTION(BlueprintCallable)
    void DesableRhythmSynchro();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcAdjustTimeRate() const;
    
};

