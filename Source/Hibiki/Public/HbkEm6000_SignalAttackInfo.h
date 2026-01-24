#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HbkEm6000_SignalAttackInfo.generated.h"

USTRUCT(BlueprintType)
struct FHbkEm6000_SignalAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReceivedNotifySignalAttackPre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTimeFromReceivedNotifySignalAttackPre;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SignalAttackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRunningBeforeSignalAttackTask;
    
    HIBIKI_API FHbkEm6000_SignalAttackInfo();
};

