#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HbkGimmick_SubMissionDustBoxDust.generated.h"

class AHbkGimmick_PhysicsObj;

USTRUCT(BlueprintType)
struct FHbkGimmick_SubMissionDustBoxDust {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHbkGimmick_PhysicsObj> DustClass;
    
    HIBIKI_API FHbkGimmick_SubMissionDustBoxDust();
};

