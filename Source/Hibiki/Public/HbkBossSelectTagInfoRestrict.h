#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBossSelectTagInfoRestrict.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossSelectTagInfoRestrict {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RestrictTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FHbkBossSelectTagInfoRestrict();
};

