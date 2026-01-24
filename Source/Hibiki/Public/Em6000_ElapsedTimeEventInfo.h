#pragma once
#include "CoreMinimal.h"
#include "Em6000_ElapsedTimeDelegateDelegate.h"
#include "Em6000_ElapsedTimeEventInfo.generated.h"

USTRUCT(BlueprintType)
struct FEm6000_ElapsedTimeEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEm6000_ElapsedTimeDelegate OnElapsedTimeDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExecuteMultiple;
    
    HIBIKI_API FEm6000_ElapsedTimeEventInfo();
};

