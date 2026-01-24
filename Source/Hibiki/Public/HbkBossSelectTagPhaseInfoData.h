#pragma once
#include "CoreMinimal.h"
#include "HbkBossSelectTagPhaseInfoData.generated.h"

USTRUCT(BlueprintType)
struct FHbkBossSelectTagPhaseInfoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContinueInhibitionRate;
    
    HIBIKI_API FHbkBossSelectTagPhaseInfoData();
};

