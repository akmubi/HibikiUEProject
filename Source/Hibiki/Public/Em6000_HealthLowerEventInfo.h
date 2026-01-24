#pragma once
#include "CoreMinimal.h"
#include "Em6000_HealthLowerDelegateDelegate.h"
#include "Em6000_HealthLowerEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FEm6000_HealthLowerEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerHealthRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_HealthLowerDelegate OnHealthLowerDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecuteMultiple;
    
    HIBIKI_API FEm6000_HealthLowerEventInfo();
};

