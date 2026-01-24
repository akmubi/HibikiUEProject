#pragma once
#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "HbkGameplayTask_MGRhythmTowerMenu.generated.h"

class UDataTable;
class UHbkGameplayTask_MGRhythmTowerMenu;
class UHbkMGRhythmTower_MenuAsset;
class UHbkRhythmTowerStartWidget;
class UObject;

UCLASS(Blueprintable)
class UHbkGameplayTask_MGRhythmTowerMenu : public UGameplayTask {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHbkGameplayTask_MGRhythmTowerMenuDelegate, bool, HardcoreMode);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerMenuDelegate OnMenuTutorial;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerMenuDelegate OnBeginNewGame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerMenuDelegate OnBeginContinue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkGameplayTask_MGRhythmTowerMenuDelegate OnRhythmTowerAutoSave;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkRhythmTowerStartWidget* pStartWidget;
    
public:
    UHbkGameplayTask_MGRhythmTowerMenu(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_MGRhythmTowerMenu* RhythmTowerMenuTask(UObject* WorldContextObject, UHbkMGRhythmTower_MenuAsset* pMenuAsset, UDataTable* pSoundDataTable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReturnToHideout();
    
    UFUNCTION(BlueprintCallable)
    void OnNewGame(bool bHardcoreMode);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void OnContinue(bool bHardcoreMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishMenuTutorial();
    
};

