#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "InputCoreTypes.h"
#include "EDrawWidgetType.h"
#include "EHbkHUDFollowDevice.h"
#include "EHbkLetterBoxType.h"
#include "EHbkNote.h"
#include "HbkHUDLatestFollowDeviceChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "TngHUD.h"
#include "HibikiHUD.generated.h"

class APlayerController;
class UHbkBossGaugeParentWidget;
class UHbkCommonBGWidget;
class UHbkCutSceneFooterButtonWidget;
class UHbkDebugSelectWidget;
class UHbkGameOverWidget;
class UHbkKorsicaGimmickWidget;
class UHbkLiftBattleWidget;
class UHbkMacaronRhythmGameWidget;
class UHbkPauseMenuWidget;
class UHbkPlayerHUDBaseWidget;
class UHbkRhythmGameBeatHitWidget;
class UHbkScreenTransitionWidget;
class UHbkSpAttackScoreBarWidget;
class UHbkTalkWidget;
class UHbkTutorialHierarchyWidget;
class UObject;
class UTngUserWidget;
class UUserWidget;

UCLASS(Blueprintable, DefaultConfig, NonTransient, Config=Engine)
class HIBIKI_API AHibikiHUD : public ATngHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTngUserWidget*> GameWidgetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShownGameHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShownDebugHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHbkPlayerHUDBaseWidget* PlayerHUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UHbkScreenTransitionWidget> ScreenTransitionHud;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkHUDLatestFollowDeviceChanged OnLatestFollowDeviceChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FSoftClassPath DebugSelectWidgetClassName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FFilePath DebugSelectWidgetClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHbkDebugSelectWidget* DebugWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkLiftBattleWidget> LiftBattleWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkPauseMenuWidget> PauseWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> RichTextTagOrIdExtensionMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkCommonBGWidget> CommonBGWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTngUserWidget> StageResultWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkGameOverWidget> GameOverWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkSpAttackScoreBarWidget> RhythmScoreWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkRhythmGameBeatHitWidget> RhythmGameWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkKorsicaGimmickWidget> KorsicaGimmickWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkMacaronRhythmGameWidget> MacaronGimmickWidgetClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkTutorialHierarchyWidget> TutorialHierarchyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UHbkCutSceneFooterButtonWidget> CutSceneFooterButtonWidget;
    
public:
    AHibikiHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleShowGameHUD();
    
    UFUNCTION(BlueprintCallable)
    void ToggleShowAll();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartRhythmJumpWipe(UObject* WorldContextObject, EHbkNote NoteType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartLetterBox(UObject* WorldContextObject, EHbkNote NoteType, EHbkLetterBoxType AnimType);
    
    UFUNCTION(BlueprintCallable)
    void ShowGameHUD();
    
    UFUNCTION(BlueprintCallable)
    void ShowAll();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveUserWidget(TSubclassOf<UTngUserWidget> UserWidget, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveSpecifiedUserWidget(UTngUserWidget* UserWidget, APlayerController* PlayerController);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangedConstrainAspectRatio(bool bEnabled);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCoverScreenTransition(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void HideGameHUD();
    
    UFUNCTION(BlueprintCallable)
    void HideAll();
    
    UFUNCTION(BlueprintCallable)
    static void HbkAddToViewport(UUserWidget* UserWidget, int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UTngUserWidget*> GetWidgetByClass(TSubclassOf<UTngUserWidget> UserWidget, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkPlayerHUDBaseWidget* GetPlayerHUD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkLiftBattleWidget* GetLiftBattleWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHbkHUDFollowDevice GetLatestFollowDevice() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkDebugSelectWidget* GetDebugWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHbkBossGaugeParentWidget* GetBossGaugeParent();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndRhythmJumpWipe(UObject* WorldContextObject, EHbkNote NoteType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndLetterBox(UObject* WorldContextObject, EHbkNote NoteType, EHbkLetterBoxType AnimType);
    
    UFUNCTION(BlueprintCallable)
    void DebugEnable(FGameplayTag DebugTag);
    
    UFUNCTION(BlueprintCallable)
    void DebugDisable(FGameplayTag DebugTag);
    
    UFUNCTION(BlueprintCallable)
    void DebugAction(FGameplayTag DebugTag);
    
    UFUNCTION(BlueprintCallable)
    static UHbkTalkWidget* CreateTalkWidget(TSubclassOf<UTngUserWidget> TalkWidget, APlayerController* PlayerController, bool bIsShow, bool IsChangeDraw);
    
    UFUNCTION(BlueprintCallable)
    static UTngUserWidget* AddUserWidget(TSubclassOf<UTngUserWidget> UserWidget, APlayerController* PlayerController, bool bIsShow, bool IsChangeDraw, EDrawWidgetType DrawType, int32 ZOrder);
    
};

