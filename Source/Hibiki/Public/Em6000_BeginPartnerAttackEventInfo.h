#pragma once
#include "CoreMinimal.h"
#include "Em6000_BeginPartnerAttackDelegateDelegate.h"
#include "Em6000_BeginPartnerAttackEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FEm6000_BeginPartnerAttackEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_BeginPartnerAttackDelegate OnBeginPartnerAttackDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecuteMultiple;
    
    HIBIKI_API FEm6000_BeginPartnerAttackEventInfo();
};

