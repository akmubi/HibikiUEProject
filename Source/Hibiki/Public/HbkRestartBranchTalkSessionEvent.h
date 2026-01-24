#pragma once
#include "CoreMinimal.h"
#include "HbkTalkSessionConf.h"
#include "HbkRestartBranchTalkSessionEvent.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRestartBranchTalkSessionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf TrueEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHbkTalkSessionConf FalseEvent;
    
    FHbkRestartBranchTalkSessionEvent();
};

