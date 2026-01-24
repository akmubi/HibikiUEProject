#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EHbkAnimNotify_ActivateAgentTagType_t.h"
#include "HbkAnimNotify_ActivateAgentTagInfo_t.generated.h"

USTRUCT(BlueprintType)
struct FHbkAnimNotify_ActivateAgentTagInfo_t {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName callSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkAnimNotify_ActivateAgentTagType_t Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtIntValue;
    
    HIBIKI_API FHbkAnimNotify_ActivateAgentTagInfo_t();
};

