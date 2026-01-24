#include "HbkEnemyAssistAttackEditDataAsset.h"

UHbkEnemyAssistAttackEditDataAsset::UHbkEnemyAssistAttackEditDataAsset() {
}

bool UHbkEnemyAssistAttackEditDataAsset::RegistAssistData(int32 Index, TArray<FHbkEnemyAssistAttackParamDataRow> SaveData) {
    return false;
}

FString UHbkEnemyAssistAttackEditDataAsset::GetEnemyAssetName(TSoftClassPtr<AHbkEnemyCharacter> EnemyClass) {
    return TEXT("");
}

bool UHbkEnemyAssistAttackEditDataAsset::GetAssistRowParam(int32 Index, TArray<FHbkEnemyAssistAttackParamDataRow>& OutData) {
    return false;
}


