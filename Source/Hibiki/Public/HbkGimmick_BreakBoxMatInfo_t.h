#pragma once
#include "CoreMinimal.h"
#include "HbkGimmick_BreakBoxMatInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkGimmick_BreakBoxMatInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MatName;
    
    HIBIKI_API FHbkGimmick_BreakBoxMatInfo_t();
};

