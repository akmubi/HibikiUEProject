#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EHbkPlayerRDGrowthType.h"
#include "HbkRhythmDungeonContollerDelegateDelegate.h"
#include "HbkRhythmDungeonContoller_EndShopDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "HbkRhythmDungeonController.generated.h"

class AActor;
class UHbkGameOverWidget;
class UHbkGameplayTask_MGRhythmDungeon;
class UHbkMGRhythmDungeon_DataAsset;
class UHbkRhythmDungeonChallengeController;
class UHbkRhythmDungeonPopupWidget;
class UHbkRhythmDungeonResultWidget;
class UHbkRhythmDungeonStartWidget;
class UHbkRhythmDungeonStatusWidget;
class UHbkRhythmDungeonStoreWidget;
class URhythmDungeonBattleWidget;
class UStringTable;

UCLASS(Blueprintable)
class UHbkRhythmDungeonController : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnBeforeUnLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnPostLoad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnWaveStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnPostItemEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContoller_EndShopDelegate OnEndShop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnChallengeAfterShop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnCancelShop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnEnemyDestroy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnCleanRobotDestroy;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnWaveEndBattle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnChallengeSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnChallengeFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnAutoSave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkRhythmDungeonContollerDelegate OnDebugJump;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* StringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmDungeonStartWidget> StartWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmDungeonPopupWidget> PopupWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URhythmDungeonBattleWidget> BattleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmDungeonStoreWidget> StoreWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmDungeonResultWidget> ResultWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkGameOverWidget> GameOverWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmDungeonStatusWidget> StatusWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CleanRobotClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> VendingMachineClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> TreasureChestClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> KaleStatueClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> LaserPodClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkMGRhythmDungeon_DataAsset* RhythmDungeonDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHbkGameplayTask_MGRhythmDungeon* pRhythmDungeonTask;
    
public:
    UHbkRhythmDungeonController();

    UFUNCTION(BlueprintCallable)
    void RemoveGrowthParam(EHbkPlayerRDGrowthType GrowthType, int32 RemoveLevel);
    
    UFUNCTION(BlueprintCallable)
    bool IsChallenge();
    
    UFUNCTION(BlueprintCallable)
    bool GetSelectedChallenge();
    
    UFUNCTION(BlueprintCallable)
    UHbkGameplayTask_MGRhythmDungeon* GetRhythmDungeonTask();
    
    UFUNCTION(BlueprintCallable)
    void EquipSpecialAttack(const FGameplayTag SPATag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkGameplayTask_MGRhythmDungeon* Blueprint_GetRhythmDungeonTask(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UHbkRhythmDungeonChallengeController* Blueprint_GetRhythmDungeonChallengeController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void AddGrowthParam(EHbkPlayerRDGrowthType GrowthType, int32 AddLevel);
    
};

