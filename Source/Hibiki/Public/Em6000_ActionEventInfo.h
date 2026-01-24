#pragma once
#include "CoreMinimal.h"
#include "Em6000_ActionDelegateDelegate.h"
#include "Em6000_ActionEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FEm6000_ActionEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_ActionDelegate OnActionDelegate;
    
    HIBIKI_API FEm6000_ActionEventInfo();
};

