#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HbkEnemyAssistAttackParamDataRow.h"
#include "HbkEnemyAssistAttackEditDataAsset.generated.h"

class AHbkEnemyCharacter;
class UDataTable;

UCLASS(Blueprintable)
class HIBIKI_API UHbkEnemyAssistAttackEditDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> AssistAttackTableList;
    
    UHbkEnemyAssistAttackEditDataAsset();

    UFUNCTION(BlueprintCallable)
    bool RegistAssistData(int32 Index, TArray<FHbkEnemyAssistAttackParamDataRow> SaveData);
    
    UFUNCTION(BlueprintCallable)
    FString GetEnemyAssetName(TSoftClassPtr<AHbkEnemyCharacter> EnemyClass);
    
    UFUNCTION(BlueprintCallable)
    bool GetAssistRowParam(int32 Index, TArray<FHbkEnemyAssistAttackParamDataRow>& OutData);
    
};

