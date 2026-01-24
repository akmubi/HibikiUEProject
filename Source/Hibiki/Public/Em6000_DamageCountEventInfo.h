#pragma once
#include "CoreMinimal.h"
#include "Em6000_DamageCountDelegateDelegate.h"
#include "Em6000_DamageCountEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FEm6000_DamageCountEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DamageCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_DamageCountDelegate OnDamageCountDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecuteMultiple;
    
    HIBIKI_API FEm6000_DamageCountEventInfo();
};

