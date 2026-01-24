#pragma once
#include "CoreMinimal.h"
#include "Em6000_ContinuousDamageDelegateDelegate.h"
#include "Em6000_ContinuousDamageEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FEm6000_ContinuousDamageEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_ContinuousDamageDelegate OnContinuousDamageDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecuteMultiple;
    
    HIBIKI_API FEm6000_ContinuousDamageEventInfo();
};

