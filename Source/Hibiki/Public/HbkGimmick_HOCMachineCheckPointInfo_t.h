#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_HOCMachineCheckPointInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_HOCMachineCheckPointInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CheckPointCallSign;
    
    HIBIKI_API FHbkGimmick_HOCMachineCheckPointInfo_t();
};

