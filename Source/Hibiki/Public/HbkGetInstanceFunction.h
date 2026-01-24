#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "HbkGetInstanceFunction.generated.h"

class AActor;
class AHbkPlayerCameraManager;
class AHbkPlayerCharacterBase;
class AHbkPlayerController;
class AHbkPlayerControllerBase;
class AHbkPlayerState;
class AHibikiHUD;
class UActorComponent;
class UAnimInstance;
class UHbkBattleManager;
class UHbkDialogSystem;
class UHbkEnemyManager;
class UHbkGameEnvManager;
class UHbkGameEventManager;
class UHbkGameRuleManager;
class UHbkGimmickManager;
class UHbkIconWidgetManager;
class UHbkInventoryManager;
class UHbkMapManager;
class UHbkPlayerCharacterManager;
class UHbkPlayerInheritData;
class UHbkRSSRecorder;
class UHbkRhythmSynchroSystem;
class UHbkSaveGameManager;
class UHbkTelemetryManager;
class UHbkTutorialManager;
class UObject;
class USceneComponent;
class UTngGameInstance;
class UTngGameSystem;
class UWorld;

UCLASS(Blueprintable)
class HIBIKI_API UHbkGetInstanceFunction : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UHbkGetInstanceFunction();

    UFUNCTION(BlueprintCallable)
    static UObject* K2_GetTngObjectNewInstance(AActor* Owner, UClass* ClassType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_GetTngGameSystemClass(const UObject* WorldContextObject, TSubclassOf<UTngGameSystem> ClassType, bool& Succeed, UTngGameSystem*& OutClass);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* K2_GetTngComponentClassFromAllParent(USceneComponent* Owner, TSubclassOf<USceneComponent> ClassType);
    
    UFUNCTION(BlueprintCallable)
    static USceneComponent* K2_GetTngComponentClassFromAllChild(USceneComponent* Owner, TSubclassOf<USceneComponent> ClassType);
    
    UFUNCTION(BlueprintCallable)
    static void K2_GetTngComponentClass(AActor* Owner, TSubclassOf<UActorComponent> ClassType, bool& Succeed, UActorComponent*& OutClass);
    
    UFUNCTION(BlueprintCallable)
    static void K2_GetTngAnimClass(AActor* Owner, TSubclassOf<UAnimInstance> ClassType, bool& Succeed, UAnimInstance*& OutClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_GetHbkPlayerControllerClass(const UObject* WorldContextObject, int32 PlayerIndex, TSubclassOf<AHbkPlayerController> ClassType, bool& Succeed, AHbkPlayerController*& OutClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_GetHbkPlayerCharacterClass(const UObject* WorldContextObject, int32 PlayerIndex, TSubclassOf<AHbkPlayerCharacterBase> ClassType, bool& Succeed, AHbkPlayerCharacterBase*& OutClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTngGameInstance* GetTngGameInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkTutorialManager* GetHbkTutorialManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkTelemetryManager* GetHbkTelemetryManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkSaveGameManager* GetHbkSaveGameManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkRhythmSynchroSystem* GetHbkRSSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkRSSRecorder* GetHbkRSSRecorder(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHbkPlayerState* GetHbkPlayerState(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayerInheritData* GetHbkPlayerInheritData(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHibikiHUD* GetHbkPlayerHud(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AHbkPlayerControllerBase* GetHbkPlayerControllerBaseFromWorld(const UWorld* World, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHbkPlayerControllerBase* GetHbkPlayerControllerBase(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHbkPlayerController* GetHbkPlayerController(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkPlayerCharacterManager* GetHbkPlayerCharacterManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHbkPlayerCharacterBase* GetHbkPlayerCharacterBase(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHbkPlayerCameraManager* GetHbkPlayerCameraManager(const UObject* WorldContextObject, int32 PlayerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkMapManager* GetHbkMapManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkInventoryManager* GetHbkInventoryManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkIconWidgetManager* GetHbkIconWidgetManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkGimmickManager* GetHbkGimmickManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UTngGameSystem* GetHbkGameSystemClass(const UObject* WorldContextObject, TSubclassOf<UTngGameSystem> ClassType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkGameRuleManager* GetHbkGameRuleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkGameEventManager* GetHbkGameEventManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkGameEnvManager* GetHbkGameEnvManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkEnemyManager* GetHbkEnemyManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkDialogSystem* GetHbkDialogSystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UHbkBattleManager* GetHbkBattleManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AHbkPlayerCharacterBase* GetCurrentHbkPlayerCharacter(const UObject* WorldContextObject);
    
};

