#pragma once
#include "CoreMinimal.h"
#include "HbkBlockDamageParam.generated.h"

USTRUCT(BlueprintType)
struct FHbkBlockDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDirectionalParry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLateParry;
    
    HIBIKI_API FHbkBlockDamageParam();
};

