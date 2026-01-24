#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_SubMissionDustBoxCorrectDust.generated.h"

class AHbkGimmick_SubMissionCorrectDust;

USTRUCT(BlueprintType)
struct FHbkGimmick_SubMissionDustBoxCorrectDust {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_SubMissionCorrectDust> CorrectDustClass;
    
    HIBIKI_API FHbkGimmick_SubMissionDustBoxCorrectDust();
};

