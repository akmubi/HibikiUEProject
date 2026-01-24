#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "HbkEnemyAssistAttackDescriptionParam.h"
#include "HbkEnemyAssistAttackDescriptionAsset.generated.h"

class AHbkEnemyCharacter;

UCLASS(Blueprintable)
class HIBIKI_API UHbkEnemyAssistAttackDescriptionAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemyAssistAttackDescriptionParam> DescriptionList;
    
    UHbkEnemyAssistAttackDescriptionAsset();

    UFUNCTION(BlueprintCallable)
    FString GetDescription(TSoftClassPtr<AHbkEnemyCharacter> EnemyClass, FGameplayTag AttackTag);
    
};

