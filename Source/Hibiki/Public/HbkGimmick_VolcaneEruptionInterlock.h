#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_VolcaneEruptionInterlock.generated.h"

class AHbkGimmick_Volcane;
class AHbkGimmick_VolcaneEruptionArea;

USTRUCT(BlueprintType)
struct FHbkGimmick_VolcaneEruptionInterlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHbkGimmick_Volcane* Volcane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AHbkGimmick_VolcaneEruptionArea*> EruptionAreas;
    
    HIBIKI_API FHbkGimmick_VolcaneEruptionInterlock();
};

