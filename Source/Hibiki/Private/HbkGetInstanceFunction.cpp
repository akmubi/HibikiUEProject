#include "HbkGetInstanceFunction.h"
#include "Templates/SubclassOf.h"

UHbkGetInstanceFunction::UHbkGetInstanceFunction() {
}

UObject* UHbkGetInstanceFunction::K2_GetTngObjectNewInstance(AActor* Owner, UClass* ClassType) {
    return NULL;
}

void UHbkGetInstanceFunction::K2_GetTngGameSystemClass(const UObject* WorldContextObject, TSubclassOf<UTngGameSystem> ClassType, bool& Succeed, UTngGameSystem*& OutClass) {
}

USceneComponent* UHbkGetInstanceFunction::K2_GetTngComponentClassFromAllParent(USceneComponent* Owner, TSubclassOf<USceneComponent> ClassType) {
    return NULL;
}

USceneComponent* UHbkGetInstanceFunction::K2_GetTngComponentClassFromAllChild(USceneComponent* Owner, TSubclassOf<USceneComponent> ClassType) {
    return NULL;
}

void UHbkGetInstanceFunction::K2_GetTngComponentClass(AActor* Owner, TSubclassOf<UActorComponent> ClassType, bool& Succeed, UActorComponent*& OutClass) {
}

void UHbkGetInstanceFunction::K2_GetTngAnimClass(AActor* Owner, TSubclassOf<UAnimInstance> ClassType, bool& Succeed, UAnimInstance*& OutClass) {
}

void UHbkGetInstanceFunction::K2_GetHbkPlayerControllerClass(const UObject* WorldContextObject, int32 PlayerIndex, TSubclassOf<AHbkPlayerController> ClassType, bool& Succeed, AHbkPlayerController*& OutClass) {
}

void UHbkGetInstanceFunction::K2_GetHbkPlayerCharacterClass(const UObject* WorldContextObject, int32 PlayerIndex, TSubclassOf<AHbkPlayerCharacterBase> ClassType, bool& Succeed, AHbkPlayerCharacterBase*& OutClass) {
}

UTngGameInstance* UHbkGetInstanceFunction::GetTngGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

UHbkTutorialManager* UHbkGetInstanceFunction::GetHbkTutorialManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkTelemetryManager* UHbkGetInstanceFunction::GetHbkTelemetryManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkSaveGameManager* UHbkGetInstanceFunction::GetHbkSaveGameManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkRhythmSynchroSystem* UHbkGetInstanceFunction::GetHbkRSSystem(const UObject* WorldContextObject) {
    return NULL;
}

UHbkRSSRecorder* UHbkGetInstanceFunction::GetHbkRSSRecorder(const UObject* WorldContextObject) {
    return NULL;
}

AHbkPlayerState* UHbkGetInstanceFunction::GetHbkPlayerState(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

UHbkPlayerInheritData* UHbkGetInstanceFunction::GetHbkPlayerInheritData(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

AHibikiHUD* UHbkGetInstanceFunction::GetHbkPlayerHud(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

AHbkPlayerControllerBase* UHbkGetInstanceFunction::GetHbkPlayerControllerBaseFromWorld(const UWorld* World, int32 PlayerIndex) {
    return NULL;
}

AHbkPlayerControllerBase* UHbkGetInstanceFunction::GetHbkPlayerControllerBase(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

AHbkPlayerController* UHbkGetInstanceFunction::GetHbkPlayerController(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

UHbkPlayerCharacterManager* UHbkGetInstanceFunction::GetHbkPlayerCharacterManager(const UObject* WorldContextObject) {
    return NULL;
}

AHbkPlayerCharacterBase* UHbkGetInstanceFunction::GetHbkPlayerCharacterBase(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

AHbkPlayerCameraManager* UHbkGetInstanceFunction::GetHbkPlayerCameraManager(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

UHbkMapManager* UHbkGetInstanceFunction::GetHbkMapManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkInventoryManager* UHbkGetInstanceFunction::GetHbkInventoryManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkIconWidgetManager* UHbkGetInstanceFunction::GetHbkIconWidgetManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkGimmickManager* UHbkGetInstanceFunction::GetHbkGimmickManager(const UObject* WorldContextObject) {
    return NULL;
}

UTngGameSystem* UHbkGetInstanceFunction::GetHbkGameSystemClass(const UObject* WorldContextObject, TSubclassOf<UTngGameSystem> ClassType) {
    return NULL;
}

UHbkGameRuleManager* UHbkGetInstanceFunction::GetHbkGameRuleManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkGameEventManager* UHbkGetInstanceFunction::GetHbkGameEventManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkGameEnvManager* UHbkGetInstanceFunction::GetHbkGameEnvManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkEnemyManager* UHbkGetInstanceFunction::GetHbkEnemyManager(const UObject* WorldContextObject) {
    return NULL;
}

UHbkDialogSystem* UHbkGetInstanceFunction::GetHbkDialogSystem(const UObject* WorldContextObject) {
    return NULL;
}

UHbkBattleManager* UHbkGetInstanceFunction::GetHbkBattleManager(const UObject* WorldContextObject) {
    return NULL;
}

AHbkPlayerCharacterBase* UHbkGetInstanceFunction::GetCurrentHbkPlayerCharacter(const UObject* WorldContextObject) {
    return NULL;
}


