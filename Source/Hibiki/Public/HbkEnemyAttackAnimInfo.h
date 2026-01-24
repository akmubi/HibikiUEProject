#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEnemyAttackAnimInfo.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FHbkEnemyAttackAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AttackAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> AttackAnimList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimTypeTag;
    
    HIBIKI_API FHbkEnemyAttackAnimInfo();
};

