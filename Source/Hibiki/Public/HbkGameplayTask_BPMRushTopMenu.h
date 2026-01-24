#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_BPMRushTopMenu.generated.h"

class AHbkBPMRushController;
class UHbkBPMRushSettingsDataAsset;
class UHbkBPMRushStartWidget;
class UHbkGameplayTask_ScreenTransition;

UCLASS(Blueprintable)
class UHbkGameplayTask_BPMRushTopMenu : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FNewGameDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNewGameDelegate OnNewGame;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkBPMRushController* BPMRushController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkBPMRushSettingsDataAsset* SettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkBPMRushStartWidget* StartWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_ScreenTransition* ScreenTransitionTask;
    
public:
    UHbkGameplayTask_BPMRushTopMenu(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ScreenTransitionFinished();
    
    UFUNCTION(BlueprintCallable)
    void ReturnToHideout();
    
    UFUNCTION(BlueprintCallable)
    void NewGame(bool bHardcoreMode);
    
};

