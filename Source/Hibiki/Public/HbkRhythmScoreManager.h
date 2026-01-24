#pragma once
#include "CoreMinimal.h"
#include "HbkBeginRhythmScoreParam.h"
#include "HbkInputResultTime.h"
#include "RScoreInputCancelDelegateDelegate.h"
#include "RScoreInputResultDelegateDelegate.h"
#include "RScoreNoteDelegateDelegate.h"
#include "RScoreNoticeDelegateDelegate.h"
#include "RScoreRegisterDelegateDelegate.h"
#include "RScoreResultDelegateDelegate.h"
#include "TngGameSystem.h"
#include "HbkRhythmScoreManager.generated.h"

class UAkAudioEvent;
class UHbkRhythmScoreAsset;

UCLASS(Blueprintable)
class HIBIKI_API UHbkRhythmScoreManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRScoreNoteDelegate OnNoteTiming;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRScoreNoteDelegate OnNoteTimingAddTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRScoreRegisterDelegate OnRegisterScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRScoreNoticeDelegate OnChangeSoundState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRScoreNoticeDelegate OnScoreStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRScoreNoticeDelegate OnScoreEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRScoreInputResultDelegate OnInputResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRScoreInputCancelDelegate OnCancelInputRelease;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRScoreResultDelegate OnRhythmScoreResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RhythmScoreInEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RhythmScoreOutEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkInputResultTime InputResultEasy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkInputResultTime InputResultNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkInputResultTime InputResultHard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkInputResultTime InputResultVeryEasy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FHbkBeginRhythmScoreParam BeginRSParam;
    
public:
    UHbkRhythmScoreManager();

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SyncUserCueForStart(const FString& UserString);
    
public:
    UFUNCTION(BlueprintCallable)
    bool StopRhythmScore();
    
    UFUNCTION(BlueprintCallable)
    bool StartRhythmScore();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterRhythmScore(UHbkRhythmScoreAsset* ScoreParam, const FHbkBeginRhythmScoreParam BeginParam);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PrepareForStart(int32 NoteCount, bool bDownBeat);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScoreTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkRhythmScoreAsset* GetCurrentRhythmScore() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ChangeSoundState(int32 NoteCount, bool bDownBeat);
    
};

