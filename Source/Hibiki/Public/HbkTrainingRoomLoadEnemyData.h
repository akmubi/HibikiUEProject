#pragma once
#include "CoreMinimal.h"
#include "EHbkEnemyCategoryType.h"
#include "Templates/SubclassOf.h"
#include "HbkTrainingRoomLoadEnemyData.generated.h"

class AHbkEnemyCharacter;

USTRUCT(BlueprintType)
struct FHbkTrainingRoomLoadEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkEnemyCharacter> LoadedEnemyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EHbkEnemyCategoryType EnemyCaterogyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText EnemyName;
    
    HIBIKI_API FHbkTrainingRoomLoadEnemyData();
};

