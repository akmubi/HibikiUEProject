#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBPMRushEnemyRhythmGaugeData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushEnemyRhythmGaugeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadEnemyPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> EnemyTags;
    
    HIBIKI_API FHbkBPMRushEnemyRhythmGaugeData();
};

