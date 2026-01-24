#pragma once
#include "CoreMinimal.h"
#include "HbkTalkable_BreakInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkTalkable_BreakInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConstraintName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcePower;
    
    HIBIKI_API FHbkTalkable_BreakInfo_t();
};

