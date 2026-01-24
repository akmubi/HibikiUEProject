#pragma once
#include "CoreMinimal.h"
#include "HbkRhythmDungeonChallengeInfiniteSupplyParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkRhythmDungeonChallengeInfiniteSupplyParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyGroupSetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupplyCycleCount;
    
    HIBIKI_API FHbkRhythmDungeonChallengeInfiniteSupplyParam();
};

