#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EHbkRhythmScoreResult.h"
#include "MiniGameActionDelegateDelegate.h"
#include "MiniGameEventDelegateDelegate.h"
#include "MiniGameInputDelegateDelegate.h"
#include "MiniGameInputResultDelegateDelegate.h"
#include "MiniGameResultDelegateDelegate.h"
#include "HbkPlayerMiniGameComponent.generated.h"

class UAkAudioEvent;
class UHbkBeginRhythmGameAsset;
class UHbkRhythmScoreAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HIBIKI_API UHbkPlayerMiniGameComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameActionDelegate OnReadyToBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameInputResultDelegate OnInputSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameInputResultDelegate OnInputFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameInputDelegate OnInputResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameResultDelegate OnTotalResult;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameActionDelegate OnBeginMiniGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameActionDelegate OnEndMiniGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameActionDelegate OnTransitAnimStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMiniGameActionDelegate OnTransitAnimRetry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SuccessSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* FailureSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkRhythmScoreAsset* TestRhythmScoreAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SecretBoxAnimTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmScoreAsset* MiniGameRhythmScoreAsset;
    
public:
    UHbkPlayerMiniGameComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTakeOffBeltAnimRD();
    
    UFUNCTION(BlueprintCallable)
    void OnTakeOffBeltAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnStartRhythmScore();
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmScoreInputResult(EHbkRhythmScoreResult ResultType, int32 Index, bool bInput);
    
    UFUNCTION(BlueprintCallable)
    void OnRhythmScoreCancelHoldRelease(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void OnPrepared();
    
    UFUNCTION(BlueprintCallable)
    void OnMiniGameResultAnimRD(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnMiniGameResultAnim(bool bSuccess);
    
    UFUNCTION(BlueprintCallable)
    void OnEndRhythmScore();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginMiniGameAnimRD();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginMiniGameAnim();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatHitLoopAnimRD();
    
    UFUNCTION(BlueprintCallable)
    void OnBeatHitLoopAnim();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterruptWhenFailed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInRhythmMiniGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMiniGame() const;
    
    UFUNCTION(BlueprintCallable)
    void EndMiniGame(bool bMiniGameResult);
    
    UFUNCTION(BlueprintCallable)
    bool Blueprint_PrepareRhythmMiniGame(FMiniGameEventDelegate OnReadyToBeginEvent, bool bLocationInterp, FTransform InterpLocation, UHbkRhythmScoreAsset* Asset, UHbkBeginRhythmGameAsset* BeginParamAsset);
    
    UFUNCTION(BlueprintCallable)
    bool BeginMinigame();
    
    UFUNCTION(BlueprintCallable)
    void AbortMiniGame();
    
};

