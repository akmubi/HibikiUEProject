#pragma once
#include "CoreMinimal.h"
#include "EnemyComboAttackParam.generated.h"

USTRUCT(BlueprintType)
struct FEnemyComboAttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboNum;
    
    HIBIKI_API FEnemyComboAttackParam();
};

