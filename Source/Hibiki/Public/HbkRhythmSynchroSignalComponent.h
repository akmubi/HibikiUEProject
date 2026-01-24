#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HbkRhythmSynchroMIDISignalParam.h"
#include "HbkRhythmSynchroSignalCue.h"
#include "HbkRhythmSynchroSignalParam.h"
#include "RSSignalDelegateDelegate.h"
#include "HbkRhythmSynchroSignalComponent.generated.h"

class UHbkRhythmSynchroComponent;
class UHbkRhythmSynchroSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkRhythmSynchroSignalComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSignalDelegate OnRegistEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRSSignalDelegate OnSignalEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRhythmSynchroSignalParam> SignalParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRhythmSynchroMIDISignalParam> MIDISignalParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkRhythmSynchroSignalCue> SignalCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHbkRhythmSynchroComponent> RSComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkRhythmSynchroSystem> RSSystem;
    
public:
    UHbkRhythmSynchroSignalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSignalParams(const TArray<FHbkRhythmSynchroSignalParam>& Params);
    
    UFUNCTION(BlueprintCallable)
    void SetMIDISignalParams(const TArray<FHbkRhythmSynchroMIDISignalParam>& Params);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterSignalMIDI(const FHbkRhythmSynchroMIDISignalParam& Param, int32 Velocity);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSignalCue(const FHbkRhythmSynchroSignalParam& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnUserCueEvent(const FString& UserCue);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayingMusic(int32 MusicId);
    
    UFUNCTION(BlueprintCallable)
    void OnNoteOnEvent(int32 NoteNo, int32 Velocity);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsValidSignalCueFromIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    bool IsValidSignalCue(const FName Identifier);
    
    UFUNCTION(BlueprintCallable)
    FHbkRhythmSynchroSignalCue GetSignalCueLastFromIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    FHbkRhythmSynchroSignalCue GetSignalCueLast(const FName Identifier);
    
    UFUNCTION(BlueprintCallable)
    FHbkRhythmSynchroSignalCue GetSignalCueFromIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSignalCueCountFromIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSignalCueCount(const FName Identifier);
    
    UFUNCTION(BlueprintCallable)
    FHbkRhythmSynchroSignalCue GetSignalCueAtFromIndex(int32 Index, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    FHbkRhythmSynchroSignalCue GetSignalCueAt(const FName Identifier, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    FHbkRhythmSynchroSignalCue GetSignalCue(const FName Identifier);
    
};

