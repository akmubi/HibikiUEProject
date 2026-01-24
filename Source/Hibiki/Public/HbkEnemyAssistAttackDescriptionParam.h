#pragma once
#include "CoreMinimal.h"
#include "HbkEnemyAssistAttackDescriptionParam.generated.h"

class AHbkEnemyCharacter;
class UHbkEnemyAttackInfoAssetTest;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEnemyAssistAttackDescriptionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHbkEnemyCharacter> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkEnemyAttackInfoAssetTest* AttackInfoAsset;
    
    FHbkEnemyAssistAttackDescriptionParam();
};

