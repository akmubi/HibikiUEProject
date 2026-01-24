#pragma once
#include "CoreMinimal.h"
#include "EHbkNote.h"
#include "HbkRSCompInitializeParam.generated.h"

USTRUCT(BlueprintType)
struct HIBIKI_API FHbkRSCompInitializeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHbkNote SyncNote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoopCount;
    
    FHbkRSCompInitializeParam();
};

