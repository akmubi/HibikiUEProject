#pragma once
#include "CoreMinimal.h"
#include "HbkAchievementCondition.h"
#include "HbkAchievementEntry.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkAchievementEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AchievementName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AvailablePlatforms;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ProgressivePlatforms;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkAchievementCondition> Conditions;
    
    FHbkAchievementEntry();
};

