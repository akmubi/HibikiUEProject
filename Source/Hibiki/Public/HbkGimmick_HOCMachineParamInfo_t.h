#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_HOCMachineParamInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_HOCMachineParamInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HackingDist;
    
    HIBIKI_API FHbkGimmick_HOCMachineParamInfo_t();
};

