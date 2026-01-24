#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_EVSpectraRoomExit.generated.h"

class AHbkSpectraRoomController;
class UHbkDialog_SpectraRoom;
class UHbkGameplayTask_EVSpectraRoomExit;
class UHbkGameplayTask_ScreenTransition;
class UHbkSpectraRoomSettingsDataAsset;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_EVSpectraRoomExit : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FExitDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FContinueDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExitDelegate OnExit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContinueDelegate OnContinue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkDialog_SpectraRoom* Dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_ScreenTransition* ScreenTransitionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkSpectraRoomController* SpectraRoomController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkSpectraRoomSettingsDataAsset* SettingsData;
    
public:
    UHbkGameplayTask_EVSpectraRoomExit(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionHalfDuration();
    
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnGotoHideOut();
    
    UFUNCTION(BlueprintCallable)
    void OnDecideReturnAddressMenu(int32 ButtonNo);
    
    UFUNCTION(BlueprintCallable)
    void OnCancelConfirmationHideOutMenu(int32 ButtonNo);
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptConfirmationHideOutMenu(int32 ButtonNo);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_EVSpectraRoomExit* EventSpectraRoomExit(UObject* WorldContextObject);
    
};

