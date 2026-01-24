#pragma once
#include "CoreMinimal.h"
#include "EHbkAchievementCompareOperator.h"
#include "EHbkAchievementStatSection.h"
#include "HbkAchievementCondition.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkAchievementCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatValue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAchievementStatSection StatSection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAchievementCompareOperator CompareOperator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerUnlock;
    
    FHbkAchievementCondition();
};

