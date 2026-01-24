#pragma once
#include "CoreMinimal.h"
#include "EHbkMetricsOnlineStatApplyType.h"
#include "HbkPlayerStatExtensionGDKEntry.generated.h"

USTRUCT(BlueprintType)
struct FHbkPlayerStatExtensionGDKEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkStatName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValueName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMetricsOnlineStatApplyType ApplyType;
    
    HIBIKI_API FHbkPlayerStatExtensionGDKEntry();
};

