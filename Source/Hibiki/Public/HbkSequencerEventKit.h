#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkSequencerEventKit.generated.h"

class AHbkLevelSequenceActor;
class UHbkPlayLvSeqOption;

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkSequencerEventKit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkLevelSequenceActor> LevelSequenceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHbkPlayLvSeqOption* PlayOptionData;
    
    FHbkSequencerEventKit();
};

