#pragma once
#include "CoreMinimal.h"
#include "Em6000_DamageAmountDelegateDelegate.h"
#include "Em6000_DamageAmountEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FEm6000_DamageAmountEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_DamageAmountDelegate OnDamageAmountDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecuteMultiple;
    
    HIBIKI_API FEm6000_DamageAmountEventInfo();
};

