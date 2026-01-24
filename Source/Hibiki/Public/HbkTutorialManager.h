#pragma once
#include "CoreMinimal.h"
#include "EHbkPlayerAttackType.h"
#include "EHbkTutorialResultType.h"
#include "HbkTutorialScoreRow.h"
#include "Templates/SubclassOf.h"
#include "TngGameSystem.h"
#include "TutorialCreateBeatHitDelegateDelegate.h"
#include "TutorialInputDelegateDelegate.h"
#include "TutorialNoticeDelegateDelegate.h"
#include "TutorialResultDelegateDelegate.h"
#include "HbkTutorialManager.generated.h"

class UAkAudioEvent;
class UDamageType;
class UHbkTutorialDataObject_MovieType;
class UHbkTutorialScoreAsset;
class UUserWidget;

UCLASS(Blueprintable)
class HIBIKI_API UHbkTutorialManager : public UTngGameSystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialNoticeDelegate OnRegisterScore;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialNoticeDelegate OnTutorialStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialNoticeDelegate OnTutorialEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialNoticeDelegate OnTutorialRestart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialNoticeDelegate OnTutorialScoreStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialInputDelegate OnTutorialInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialCreateBeatHitDelegate OnCreateBeatHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialResultDelegate OnTutorialResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialNoticeDelegate OnTutorialLastInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialNoticeDelegate OnTutorialLastHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialNoticeDelegate OnTutorialDisplayEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JustTimingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoodTimingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FailedTimingRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TutorialWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_MovieType> RecoveryTutorial_BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_MovieType> BatteryTutorial_BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_MovieType> GearTutorial_BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialDataObject_MovieType> OverChargeTutorial_BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ScoreCallEvent;
    
public:
    UHbkTutorialManager();

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialResult(EHbkTutorialResultType Result);
    
    UFUNCTION(BlueprintCallable)
    void SetThroughUserCue(bool Through);
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictPlayerAttack(bool Restrict);
    
    UFUNCTION(BlueprintCallable)
    void SetRestrictPlayer(bool Restrict);
    
    UFUNCTION(BlueprintCallable)
    void RestartTutorialScore();
    
    UFUNCTION(BlueprintCallable)
    void ResetRestrictPlayer();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterTutorialScore(UHbkTutorialScoreAsset* TutorialAsset);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Receive_OnTutorialResult(EHbkTutorialResultType ResultType);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnTutorialDisplayEnd();
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnLastAttackHit(const UDamageType* DamageType);
    
    UFUNCTION(BlueprintCallable)
    void Receive_OnCalledMiss(bool IsInputMiss);
    
    UFUNCTION(BlueprintCallable)
    void OnStartScoreForUserCue(const FString& UserCue);
    
    UFUNCTION(BlueprintCallable)
    void OnStartScore(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnRestartScore(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatHitStart(float BeatHitTiming);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatHitInput(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnBeatEvent(int32 NoteCount, bool bDownBeat);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackInput(int32 ComboCount, EHbkPlayerAttackType Variation, bool bJustTiming, bool bActiveTransit, float ComboActiveTime);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialSuccess() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndedTutorial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTimingRange(float& JustTiming, float& GoodTiming, float& FailedTiming);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FHbkTutorialScoreRow> GetCurrentTutorialScore() const;
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* CreateTutorialUI();
    
};

