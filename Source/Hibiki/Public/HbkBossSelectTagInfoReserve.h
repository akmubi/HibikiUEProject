#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkBossSelectTagInfoReserve.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBossSelectTagInfoReserve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ReserveTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRemainsUntilExecuted;
    
    FHbkBossSelectTagInfoReserve();
};

