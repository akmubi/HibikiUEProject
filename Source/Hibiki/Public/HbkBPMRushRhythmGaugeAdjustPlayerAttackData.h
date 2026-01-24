#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBPMRushRhythmGaugeAdjustPlayerAttackData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBPMRushRhythmGaugeAdjustPlayerAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustRate;
    
    HIBIKI_API FHbkBPMRushRhythmGaugeAdjustPlayerAttackData();
};

