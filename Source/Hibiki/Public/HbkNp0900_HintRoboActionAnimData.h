#pragma once
#include "CoreMinimal.h"
#include "EHbkNp0900_BoardType.h"
#include "HbkNp0900_HintRoboActionAnimData.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FHbkNp0900_HintRoboActionAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EHbkNp0900_BoardType, UAnimSequenceBase*> AnimList;
    
    HIBIKI_API FHbkNp0900_HintRoboActionAnimData();
};

