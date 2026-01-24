#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEnemyAssistAttackParam.generated.h"

class AHbkEnemyCharacter;

USTRUCT(BlueprintType)
struct FHbkEnemyAssistAttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHbkEnemyCharacter> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangeByDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NormalDelayNoteCount;
    
    HIBIKI_API FHbkEnemyAssistAttackParam();
};

