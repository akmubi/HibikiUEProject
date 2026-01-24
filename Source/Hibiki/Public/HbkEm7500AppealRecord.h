#pragma once
#include "CoreMinimal.h"
#include "EHbkEm7500RecordDecrementType.h"
#include "HbkEm7500AppealRecord.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkEm7500AppealRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RetentionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkEm7500RecordDecrementType DecrementType;
    
    FHbkEm7500AppealRecord();
};

