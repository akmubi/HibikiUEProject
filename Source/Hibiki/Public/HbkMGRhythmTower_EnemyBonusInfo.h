#pragma once
#include "CoreMinimal.h"
#include "HbkMGRhythmTower_EnemyBonusInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkMGRhythmTower_EnemyBonusInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverkillTime;
    
    HIBIKI_API FHbkMGRhythmTower_EnemyBonusInfo();
};

