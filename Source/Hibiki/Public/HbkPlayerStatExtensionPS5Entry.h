#pragma once
#include "CoreMinimal.h"
#include "EHbkMetricsOnlineStatApplyType.h"
#include "EHbkMetricsOnlineStatValueType.h"
#include "HbkPlayerStatExtensionPS5Entry.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkPlayerStatExtensionPS5Entry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkStatName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ValueName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMetricsOnlineStatValueType ValueType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkMetricsOnlineStatApplyType ApplyType;
    
    FHbkPlayerStatExtensionPS5Entry();
};

