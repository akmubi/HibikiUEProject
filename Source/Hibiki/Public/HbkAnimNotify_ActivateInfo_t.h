#pragma once
#include "CoreMinimal.h"
#include "EHbkAnimNotify_ActivateAgentTagType_t.h"
#include "HbkAnimNotify_ActivateInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkAnimNotify_ActivateInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAnimNotify_ActivateAgentTagType_t Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    HIBIKI_API FHbkAnimNotify_ActivateInfo_t();
};

