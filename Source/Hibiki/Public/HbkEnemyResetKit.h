#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkEnemyResetKit.generated.h"

class AHbkLevelSequenceActor;
class UHbkPlayLvSeqOption;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEnemyResetKit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkLevelSequenceActor> EnemyResetLevelSequenceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayLvSeqOption* PlayOptionData;
    
    FHbkEnemyResetKit();
};

