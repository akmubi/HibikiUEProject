#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkTalkActivateTag.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkTalkActivateTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AgentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FHbkTalkActivateTag();
};

