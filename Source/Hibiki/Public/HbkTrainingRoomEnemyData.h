#pragma once
#include "CoreMinimal.h"
#include "EHbkEnemyCategoryType.h"
#include "HbkTrainingRoomEnemyData.generated.h"

class AHbkEnemyCharacter;

USTRUCT(BlueprintType)
struct FHbkTrainingRoomEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AHbkEnemyCharacter> EnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEnemyCategoryType EnemyCaterogyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EnemyName;
    
    HIBIKI_API FHbkTrainingRoomEnemyData();
};

