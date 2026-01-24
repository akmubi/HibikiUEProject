#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEm6000_BoxRandomTagInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_BoxRandomTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Population;
    
    HIBIKI_API FHbkEm6000_BoxRandomTagInfo();
};

