#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500AppealHitCheckType.h"
#include "EHbkEm7500RecordDecrementType.h"
#include "HbkEm7500AppealActionInfo.h"
#include "HbkEm7500AppealInfo.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm7500AppealInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetentionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500RecordDecrementType DecrementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500AppealHitCheckType HitCheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHbkEm7500AppealActionInfo> ActionInfo;
    
    FHbkEm7500AppealInfo();
};

