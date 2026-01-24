#include "HibikiGameplayStatics.h"

UHibikiGameplayStatics::UHibikiGameplayStatics() {
}

void UHibikiGameplayStatics::SetSuspendScoreRecord(const UObject* WorldContextObject, bool Suspend) {
}

void UHibikiGameplayStatics::SetSuspendAutoDecrease(const UObject* WorldContextObject, bool Suspend) {
}

void UHibikiGameplayStatics::SetHintSystemDispButtnInhibit(const UObject* WorldContextObject, bool bInhibit) {
}

AHbkPlayerController* UHibikiGameplayStatics::GetHibikiPlayerController(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

AHbkPlayerCharacter* UHibikiGameplayStatics::GetHibikiPlayerCharacter(const UObject* WorldContextObject, int32 PlayerIndex) {
    return NULL;
}

ULevelStreaming* UHibikiGameplayStatics::GetHibikiLoadedStreamingLevel(const UObject* WorldContextObject, FName InPackageName) {
    return NULL;
}

UHibikiGameInstance* UHibikiGameplayStatics::GetHibikiGameInstance(const UObject* WorldContextObject) {
    return NULL;
}

void UHibikiGameplayStatics::EnemyAllCleanKill(const UObject* WorldContextObject) {
}


