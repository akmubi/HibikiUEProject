#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEm7500AppealActionInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm7500AppealActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
    FHbkEm7500AppealActionInfo();
};

