#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "EFHbkGameplayTask_EVSpectraRoomBattleResult.h"
#include "HbkGameplayTask_EVSpectraRoomBattle.generated.h"

class AHbkSpectraRoomController;
class UHbkDialog_SpectraRoom;
class UHbkGameplayTask_EVSpectraRoomBattle;
class UHbkGameplayTask_ScreenTransition;
class UHbkSpectraBattleController;
class UHbkSpectraRoomSettingsDataAsset;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVSpectraRoomBattle : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndDelegate, EFHbkGameplayTask_EVSpectraRoomBattleResult, Result);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndDelegate OnEnd;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkDialog_SpectraRoom* Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_ScreenTransition* ScreenTransitionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSpectraBattleController* SpectraBattleController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkSpectraRoomController* SpectraRoomController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSpectraRoomSettingsDataAsset* SettingsData;
    
public:
    UHbkGameplayTask_EVSpectraRoomBattle(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartBattleScreenTransitionHalfDuration();
    
    UFUNCTION(BlueprintCallable)
    void StartBattleScreenTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnSpectraBattleFinish(bool bResult);
    
    UFUNCTION(BlueprintCallable)
    void OnSpectraBattleBegun();
    
    UFUNCTION(BlueprintCallable)
    void OnSpectraBattleBeginResult();
    
    UFUNCTION(BlueprintCallable)
    void OnFailedSpectraBattle();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelRetryMenu(int32 ButtonNo);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelChallengeConfirmMenu(int32 ButtonNo);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptRetryMenu(int32 ButtonNo);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptChallengeImpossibleMenu(int32 ButtonNo);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptChallengeConfirmMenu(int32 ButtonNo);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVSpectraRoomBattle* EventSpectraRoomBattle(UObject* WorldContextObject, UHbkSpectraBattleController* NewSpectraBattleController);
    
protected:
    UFUNCTION(BlueprintCallable)
    void BeforeBattleAreaScreenTransitionHalfDuration();
    
    UFUNCTION(BlueprintCallable)
    void BeforeBattleAreaScreenTransitionFinished();
    
};

