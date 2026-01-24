#pragma once
#include "CoreMinimal.h"
#include "Em6000_DamageHistoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FEm6000_DamageHistoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamagedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    HIBIKI_API FEm6000_DamageHistoryInfo();
};

