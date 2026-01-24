#include "HbkGameEnvManager.h"

UHbkGameEnvManager::UHbkGameEnvManager() {
    this->State = NULL;
}

void UHbkGameEnvManager::RevertHbkEnginePostProcessVolumeBlend(UWorld* World, const FString& VolumeName, const FHbkGameEnvBlendWeight& BlendWeight) {
}

void UHbkGameEnvManager::Blueprint_EndToonMasking(UObject* WorldContextObject) {
}

void UHbkGameEnvManager::Blueprint_BeginToonMasking(UObject* WorldContextObject, FName ToonMaskingRowName, bool bIsPlayerMasked, AHbkCharacter* MaskedCharacter) {
}

void UHbkGameEnvManager::BeginHbkExponentialHeightFogBlendDT(UWorld* World, const FHbkExponentialHeightFogTableRow& Row, const FHbkGameEnvBlendWeight& BlendWeight) {
}

void UHbkGameEnvManager::BeginHbkExponentialHeightFogBlend(UWorld* World, const FHbkExponentialHeightFogBlendParam& TargetValue, const FHbkGameEnvBlendWeight& BlendWeight) {
}

void UHbkGameEnvManager::BeginHbkEnginePostProcessVolumeBlendDT(UWorld* World, const FString& VolumeName, const FHbkEnginePostProcessSettingsTableRow& Row, const FHbkGameEnvBlendWeight& BlendWeight) {
}

void UHbkGameEnvManager::BeginHbkEnginePostProcessVolumeBlend(UWorld* World, const FString& VolumeName, const FHbkColorGradingGlobalBlendParam& TargetValue, const FHbkGameEnvBlendWeight& BlendWeight) {
}

void UHbkGameEnvManager::BeginHbkEHFDataTableBlend(UWorld* World, const FHbkGameEnvBlendWeight& BlendWeight) {
}


