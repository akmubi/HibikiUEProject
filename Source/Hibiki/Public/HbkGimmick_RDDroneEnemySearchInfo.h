#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_RDDroneEnemySearchInfo.generated.h"

class AHbkEnemyCharacter;

USTRUCT(BlueprintType)
struct FHbkGimmick_RDDroneEnemySearchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AHbkEnemyCharacter* EnemyCharacter;
    
    HIBIKI_API FHbkGimmick_RDDroneEnemySearchInfo();
};

