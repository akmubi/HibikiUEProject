#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkBreakDownStandPointAttackParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkBreakDownStandPointAttackParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote StartNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartNoteCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote DurationNoteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DurationNoteCount;
    
    FHbkBreakDownStandPointAttackParam();
};

