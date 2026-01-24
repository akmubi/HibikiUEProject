#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkAttackRangeType.h"
#include "EHbkNote.h"
#include "HbkEnemyAttackAnimInfo.h"
#include "HbkEnemyAttackBasicInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEnemyAttackBasicInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAttackRangeType RangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuarterNoteNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote WaitTimeNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEnemyAttackAnimInfo> AttackAnimInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTypeTag;
    
    HIBIKI_API FHbkEnemyAttackBasicInfo();
};

